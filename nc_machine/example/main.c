#include <stdio.h>
#include <sys/mman.h>
#include <semaphore.h>
#include <stdint.h>

#include "src_generated/namespace_nc_generated.h"
#include "src_generated/namespace_accesstsndemo_generated.h"
#include "src_generated/accesstsndemo_nodeids.h"

#include <open62541/server_config_default.h>
#include <open62541/types.h>
#include <open62541/types_generated.h>
#include <open62541/plugin/nodestore.h>

#include "../../accesstsn_demoapps_common/mk_shminterface.h"

struct demoreader_t {
	struct mk_mainoutput *mainout;
	struct mk_maininput *mainin;
	struct mk_additionaloutput *addout;
	sem_t *sem_mainout;
	sem_t *sem_mainin;
	sem_t *sem_addout;
	uint32_t period;
//	bool flagmainout;
//	bool flagmainin;
//	bool flagaddout;
};

/* Print usage message */
static void usage(char *appname) {
	fprintf(stderr,
			"\n"
					"Usage: %s [options]\n"
					" -t [value]    Specifies update-period in milliseconds. Default 1 second as this should be the max to avoid timeouts.\n"
					" -h            Prints this help message and exits\n"
					"\n", appname);
}

/* Evaluate CLI-parameters */
void evalCLI(int argc, char *argv[0], struct demoreader_t *reader) {
	int c;
	char *appname = strrchr(argv[0], '/');
	appname = appname ? 1 + appname : argv[0];
	while (EOF != (c = getopt(argc, argv, "ht:"))) {
		switch (c) {
		case 't':
			(*reader).period = atoi(optarg) * 1000;
			break;
		case 'h':
		default:
			usage(appname);
			exit(0);
			break;
		}
	}
//	if (((*reader).flagmainout == false) && ((*reader).flagmainin == false)
//			&& ((*reader).flagaddout) == false) {
//		printf("At minium, one block of variables needs to be selected\n");
//		exit(0);
//	};

}

/* Opens a shared memory (Readonly) and created it if necessary */
void* openShM(const char *name, uint32_t size, sem_t **sem) {
	int fd;
	bool init = false;
	int mpflg = PROT_READ;
	void *shm;
	int semflg = 0;
	fd = shm_open(name, O_RDONLY, 0666);
	if ((fd == -1) && (errno == ENOENT)) {
		//shm not available yet -> create and initialize
		init = true;
		fd = shm_open(name, O_RDWR | O_CREAT, 0666);
		mpflg = PROT_READ | PROT_WRITE;
		semflg = O_CREAT;
	}
	if (fd == -1) {
		perror("SHM Open failed");
		return (NULL);
	}

	ftruncate(fd, size);
	shm = mmap(NULL, size, mpflg, MAP_SHARED | MAP_POPULATE, fd, 0);
	if (MAP_FAILED == shm) {
		perror("SHM Map failed");
		shm = NULL;
		if (init)
			shm_unlink(name);
	}
	*sem = sem_open(name, semflg, 0666, 0);
	if (*sem == SEM_FAILED) {
		perror("Semaphore open failed");
		munmap(shm, size);
		return (NULL);
	}
	if (init) {
		memset(shm, 0, size);
		mprotect(shm, size, PROT_READ);
		sem_post(*sem);
	}

	return shm;
}

/* Closes a shared memory */
int closeShM(void **shm, int len, sem_t **sem) {
	// not doing unlink of the shared memory because this should only be
	// done by the writer, so other reader process can still open it
	int ok;
	ok = munmap(*shm, len);
	if (ok < 0)
		return ok;
	*shm = NULL;
	ok = sem_close(*sem);
	if (ok < 0)
		return ok;
	*sem = NULL;
	return ok;
}

int main(int argc, char *argv[]) {

	struct demoreader_t reader;
//	reader.flagaddout = false;
//	reader.flagmainout = false;
//	reader.flagmainin = false;
//	reader.period = 1000000;    // 1 second
	reader.period = 100000;		//default
	struct timespec now;

	evalCLI(argc, argv, &reader);

	UA_Server *pServer = UA_Server_new();
	UA_ServerConfig *pConfig = UA_Server_getConfig(pServer);
	UA_UInt16 port = 48400;
	UA_ServerConfig_setMinimal(pConfig, port, NULL);

	namespace_nc_generated(pServer);
	namespace_accesstsndemo_generated(pServer);

	UA_Server_run_startup(pServer);
	bool running = true;
	double x = 0.0;

	bool flip = false;
	uint32_t chn1Status = 0;
	int32_t modeValue = 0;
	UA_String stringText;
	UA_Variant doubleValue;
	UA_Variant boolValue;
	UA_Variant uint32Value;
	UA_Variant uint8Value;
	UA_Variant int32Value;
	UA_Variant stringValue;
	char buildString[6];

	// open and setup shm mapping
	//TODO check if the flags should be set on true by default and only be changed when NULL occurs
	printf("setting up shared memory");
//	if (reader.flagmainout) {
	reader.mainout = (struct mk_mainoutput*) openShM(MK_MAINOUTKEY,
			sizeof(struct mk_mainoutput), &reader.sem_mainout);
//		if (NULL == reader.mainout)
//			reader.flagmainout = false;
//	}
//	if (reader.flagmainin) {
	reader.mainin = (struct mk_maininput*) openShM(MK_MAININKEY,
			sizeof(struct mk_maininput), &reader.sem_mainin);
//		if (NULL == reader.mainin)
//			reader.flagmainin = false;
//	}
//	if (reader.flagaddout) {
	reader.addout = (struct mk_additionaloutput*) openShM(MK_ADDAOUTKEY,
			sizeof(struct mk_additionaloutput), &reader.sem_addout);
//		if (NULL == reader.addout)
//			reader.flagaddout = false;
//	}

	while (running = true) {

		usleep(reader.period);

		UA_Server_run_iterate(pServer, false);

		if (sem_trywait(reader.sem_mainout) == 0) {
			sem_post(reader.sem_mainout);

			// gets bool to flip it
			flip = reader.mainout->xenable;
			flip = !flip;
			UA_Variant_setScalar(&boolValue, &flip,
					&UA_TYPES[UA_TYPES_BOOLEAN]);
			UA_Server_writeValue(pServer, UA_NODEID_NUMERIC(3,
			UA_ACCESSTSNDEMOID_ACCESSTSN_CNC_CNCAXISLIST_AXIS_X_ISINACTIVE),
					boolValue);

			// gets bool to flip it
			flip = reader.mainout->yenable;
			flip = !flip;
			UA_Variant_setScalar(&boolValue, &flip,
					&UA_TYPES[UA_TYPES_BOOLEAN]);
			UA_Server_writeValue(pServer, UA_NODEID_NUMERIC(3,
			UA_ACCESSTSNDEMOID_ACCESSTSN_CNC_CNCAXISLIST_AXIS_Y_ISINACTIVE),
					boolValue);

			// gets bool to flip it
			flip = reader.mainout->zenable;
			flip = !flip;
			UA_Variant_setScalar(&boolValue, &flip,
					&UA_TYPES[UA_TYPES_BOOLEAN]);
			UA_Server_writeValue(pServer, UA_NODEID_NUMERIC(3,
			UA_ACCESSTSNDEMOID_ACCESSTSN_CNC_CNCAXISLIST_AXIS_Z_ISINACTIVE),
					boolValue);

			// As per UaExpert ActStatus is an Enum with 0 in Position, 1 = Moving, 2 = Parking
			// As per Companion Spec ActStatus is an Enum with 0 = Active, 1 = Interrupted, 2 = Reset

			// set Var to 3 (3-2 = Interrupted; 3-1 = Reset; 3-3 = Active)
			chn1Status = 3;
			if (reader.mainout->machinestatus)
				chn1Status = chn1Status - 2; // 3 - 2 --> 1(Interrupted)
			if (!reader.mainout->estopstatus)
				--chn1Status; // 3 - 1 --> 2(Reset) or 1 - 1 --> 0(Active)
			if (chn1Status > 2)
				--chn1Status; // to avoid undefined status 3 if both cases fail

			// writes combination of machinestatus and estopstatus into Channel1 ActStatus
			UA_Variant_setScalar(&uint32Value, &chn1Status,
					&UA_TYPES[UA_TYPES_INT32]);
			UA_Server_writeValue(pServer,
					UA_NODEID_NUMERIC(3,
							UA_ACCESSTSNDEMOID_ACCESSTSN_CNC_CNCCHANNELLIST_CHANNEL_1_ACTSTATUS),
					uint32Value);

			// As per UaExpert ActStatus is an Enum with 0 = in Position, 1 = Stopped, 2 = In Target Area, 3 = Accelerating, 4 = Decelerating, 5 = Parked
			// As per Companion Spec ActStatus is an Enum with 0 = Active, 1 = Interrupted, 2 = Reset
			//TODO discuss and implement
//			UA_Variant_setScalar(&int32Value, &reader.mainout->spindlebrake,
//					&UA_TYPES[UA_TYPES_BOOLEAN]);
//			UA_Server_writeValue(pServer, UA_NODEID_NUMERIC(3,
//			UA_ACCESSTSNDEMOID_ACCESSTSN_CNC_CNCSPINDLELIST_SPINDLE_1_ACTSTATUS),
//					int32Value);

			UA_Variant_setScalar(&doubleValue, &reader.mainout->spindlespeed,
					&UA_TYPES[UA_TYPES_DOUBLE]);
			UA_Server_writeValue(pServer, UA_NODEID_NUMERIC(3,
			UA_ACCESSTSNDEMOID_ACCESSTSN_CNC_CNCSPINDLELIST_SPINDLE_1_CMDSPEED),
					doubleValue);

			// gets bool to flip it
			flip = reader.mainout->spindleenable;
			flip = !flip;
			UA_Variant_setScalar(&boolValue, &flip,
					&UA_TYPES[UA_TYPES_BOOLEAN]);
			UA_Server_writeValue(pServer,
					UA_NODEID_NUMERIC(3,
							UA_ACCESSTSNDEMOID_ACCESSTSN_CNC_CNCSPINDLELIST_SPINDLE_1_ISINACTIVE),
					boolValue);

		}

		if (sem_trywait(reader.sem_addout) == 0) {
			sem_post(reader.sem_addout);

			UA_Variant_setScalar(&doubleValue, &reader.addout->xpos_set,
					&UA_TYPES[UA_TYPES_DOUBLE]);
			UA_Server_writeValue(pServer,
					UA_NODEID_NUMERIC(3,
							UA_ACCESSTSNDEMOID_ACCESSTSN_CNC_CNCAXISLIST_AXIS_X_POSDIRECT_CMDPOS),
					doubleValue);

			UA_Variant_setScalar(&doubleValue, &reader.addout->ypos_set,
					&UA_TYPES[UA_TYPES_DOUBLE]);
			UA_Server_writeValue(pServer,
					UA_NODEID_NUMERIC(3,
							UA_ACCESSTSNDEMOID_ACCESSTSN_CNC_CNCAXISLIST_AXIS_Y_POSDIRECT_CMDPOS),
					doubleValue);

			UA_Variant_setScalar(&doubleValue, &reader.addout->zpos_set,
					&UA_TYPES[UA_TYPES_DOUBLE]);
			UA_Server_writeValue(pServer,
					UA_NODEID_NUMERIC(3,
							UA_ACCESSTSNDEMOID_ACCESSTSN_CNC_CNCAXISLIST_AXIS_Z_POSDIRECT_CMDPOS),
					doubleValue);

			modeValue = 0;
			// mapping mk_shminterface to companion spec
			switch (reader.addout->mode) {

			// auto mode
			case 1:
				modeValue = 2;
				break;

				// mdi to MDA
			case 2:
				modeValue = 1;
				break;

				// manual mode
			case 4:
				modeValue = 0;
				break;

				//error state
			default:
				modeValue = 3;
			}

			UA_Variant_setScalar(&uint8Value, &modeValue,
					&UA_TYPES[UA_TYPES_INT32]);
			UA_Server_writeValue(pServer,
					UA_NODEID_NUMERIC(3,
							UA_ACCESSTSNDEMOID_ACCESSTSN_CNC_CNCCHANNELLIST_CHANNEL_1_ACTOPERATIONMODE),
					uint8Value);

			UA_Variant_setScalar(&doubleValue, &reader.addout->feedrate,
					&UA_TYPES[UA_TYPES_DOUBLE]);
			UA_Server_writeValue(pServer,
					UA_NODEID_NUMERIC(3,
							UA_ACCESSTSNDEMOID_ACCESSTSN_CNC_CNCCHANNELLIST_CHANNEL_1_CMDFEEDRATE),
					doubleValue);

			UA_Variant_setScalar(&doubleValue, &reader.addout->feedoverride,
					&UA_TYPES[UA_TYPES_DOUBLE]);
			UA_Server_writeValue(pServer,
					UA_NODEID_NUMERIC(3,
							UA_ACCESSTSNDEMOID_ACCESSTSN_CNC_CNCCHANNELLIST_CHANNEL_1_CMDOVERRIDE),
					doubleValue);

			sprintf(buildString, "N%d", reader.addout->lineno);
			stringText = UA_String_fromChars(buildString);
			UA_Variant_setScalar(&stringValue, &stringText,
					&UA_TYPES[UA_TYPES_STRING]);
			UA_Server_writeValue(pServer,
					UA_NODEID_NUMERIC(3,
							UA_ACCESSTSNDEMOID_ACCESSTSN_CNC_CNCSPINDLELIST_SPINDLE_1_ACTMAINPROGRAMLINE),
					stringValue);

			UA_Variant_setScalar(&uint32Value, &reader.addout->tool,
					&UA_TYPES[UA_TYPES_UINT32]);
			UA_Server_writeValue(pServer, UA_NODEID_NUMERIC(3,
			UA_ACCESSTSNDEMOID_ACCESSTSN_CNC_CNCCHANNELLIST_CHANNEL_1_TOOLID),
					uint32Value);

		}

		if (sem_trywait(reader.sem_mainin) == 0) {
			sem_post(reader.sem_mainin);

			/*TODO correct values
			 * correct xfault (change datatype or node)
			 * correct yfault (change datatype or node)
			 * correct zfault (change datatype or node)
			 */

			// Laut UaExpert ist ActStatus ein Enum mit 0 in Position, 1 = Moving, 2 = Parking
			// Laut Companion Spec ist ActStatus ein Enum mit 0 = Active, 1 = Interrupted, 2 = Reset
			// therefore commented until clarified
			//TODO discuss

//			UA_Variant_setScalar(&boolValue, &reader.mainin->xfault,
//					&UA_TYPES[UA_TYPES_BOOLEAN]);
//			UA_Server_writeValue(pServer, UA_NODEID_NUMERIC(3,
//			UA_ACCESSTSNDEMOID_ACCESSTSN_CNC_CNCAXISLIST_AXIS_X_ACTSTATUS),
//					boolValue);

//			UA_Variant_setScalar(&boolValue, &reader.mainin->yfault,
//					&UA_TYPES[UA_TYPES_BOOLEAN]);
//			UA_Server_writeValue(pServer, UA_NODEID_NUMERIC(3,
//			UA_ACCESSTSNDEMOID_ACCESSTSN_CNC_CNCAXISLIST_AXIS_Y_ACTSTATUS),
//					boolValue);

//			UA_Variant_setScalar(&boolValue, &reader.mainin->zfault,
//					&UA_TYPES[UA_TYPES_BOOLEAN]);
//			UA_Server_writeValue(pServer, UA_NODEID_NUMERIC(3,
//			UA_ACCESSTSNDEMOID_ACCESSTSN_CNC_CNCAXISLIST_AXIS_Z_ACTSTATUS),
//					boolValue);

			UA_Variant_setScalar(&doubleValue, &reader.mainin->xpos_cur,
					&UA_TYPES[UA_TYPES_DOUBLE]);
			UA_Server_writeValue(pServer,
					UA_NODEID_NUMERIC(3,
							UA_ACCESSTSNDEMOID_ACCESSTSN_CNC_CNCAXISLIST_AXIS_X_POSDIRECT_ACTPOS),
					doubleValue);

			UA_Variant_setScalar(&doubleValue, &reader.mainin->ypos_cur,
					&UA_TYPES[UA_TYPES_DOUBLE]);
			UA_Server_writeValue(pServer,
					UA_NODEID_NUMERIC(3,
							UA_ACCESSTSNDEMOID_ACCESSTSN_CNC_CNCAXISLIST_AXIS_Y_POSDIRECT_ACTPOS),
					doubleValue);

			UA_Variant_setScalar(&doubleValue, &reader.mainin->zpos_cur,
					&UA_TYPES[UA_TYPES_DOUBLE]);
			UA_Server_writeValue(pServer,
					UA_NODEID_NUMERIC(3,
							UA_ACCESSTSNDEMOID_ACCESSTSN_CNC_CNCAXISLIST_AXIS_Z_POSDIRECT_ACTPOS),
					doubleValue);
		}

		/* TODO add missing values
		 *
		 * Missing values:
		 *
		 * xvel_set
		 * yvel_set
		 * zvel_set
		 * xhome
		 * yhome
		 * zhome
		 * xhardneg
		 * xhardpos
		 * yhardneg
		 * yhardpos
		 * zhardneg
		 * zhardpos
		 *
		 */
	}

	// cleanup
	//TODO check flags from earlier

//    if (reader.flagmainout)
	closeShM((void**) &reader.mainout, sizeof(reader.mainout),
			&reader.sem_mainout);
//    if (reader.flagmainin)
	closeShM((void**) &reader.mainin, sizeof(reader.mainin),
			&reader.sem_mainin);
//    if (reader.flagaddout)
	closeShM((void**) &reader.addout, sizeof(reader.addout),
			&reader.sem_addout);

	UA_Server_run_shutdown(pServer);
	UA_Server_delete(pServer);
	return 0;

}
