#include <stdio.h>

#include "src_generated/namespace_nc_generated.h"
#include "src_generated/namespace_AccessTSNDemo_generated.h"
#include "src_generated/AccessTSNDemo_nodeids.h"

#include <open62541/server_config_default.h>
#include <open62541/types.h>
#include <open62541/types_generated.h>
#include <open62541/plugin/nodestore.h>

#include <sys/mman.h>

#include "src_generated/mk_shminterface.h"

struct demoreader_t
{
	struct mk_mainoutput *mainout;
	struct mk_maininput *mainin;
	struct mk_additionaloutput *addout;
	uint32_t period;
	bool flagmainout;
	bool flagmainin;
	bool flagaddout;
};

/* Print usage message */
static void usage(char *appname)
{
	fprintf(stderr,
			"\n"
					"Usage: %s [options]\n"
					" -o            Reads main output variables from control\n"
					" -i            Reads main input variables to control\n"
					" -a            Reads additional output variables from control\n"
					" -t [value]    Specifies update-period in milliseconds. Default 10 seconds.\n"
					" -h            Prints this help message and exits\n"
					"\n", appname);
}

/* Evaluate CLI-parameters */
void evalCLI(int argc, char *argv[0], struct demoreader_t *reader)
{
	int c;
	char *appname = strrchr(argv[0], '/');
	appname = appname ? 1 + appname : argv[0];
	while (EOF != (c = getopt(argc, argv, "oiaht:")))
	{
		switch (c)
		{
		case 'o':
			(*reader).flagmainout = true;
			break;
		case 'i':
			(*reader).flagmainin = true;
			break;
		case 'a':
			(*reader).flagaddout = true;
			break;
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
	if (((*reader).flagmainout == false) && ((*reader).flagmainin == false)
			&& ((*reader).flagaddout) == false)
	{
		printf("At minium, one block of variables needs to be selected\n");
		exit(0);
	};

}

/* Opens a shared memory (Readonly) and created it if necessary */
void* openShM(const char *name, uint32_t size) {
	int fd;
	void *shm;
	fd = shm_open(name, O_RDONLY | O_CREAT, 777); //TODO change 777 back to 700
	if (fd == -1) {
		perror("SHM Open failed");
		return (NULL);
	}
	ftruncate(fd, size);
	shm = mmap(NULL, size, PROT_READ, MAP_SHARED, fd, 0);
	if (MAP_FAILED == shm) {
		perror("SHM Map failed");
		shm = NULL;
		shm_unlink(name);
	}
	return shm;
}

int main(int argc, char *argv[]) {

	struct demoreader_t reader;
	reader.flagaddout = false;
	reader.flagmainout = false;
	reader.flagmainin = false;
	reader.period = 1000000;       // 1 second
	struct timespec now;

	evalCLI(argc, argv, &reader);

	UA_Server *pServer = UA_Server_new();
	UA_ServerConfig *pConfig = UA_Server_getConfig(pServer);
	UA_UInt16 port = 48400;
	UA_ServerConfig_setMinimal(pConfig, port, NULL);

	namespace_nc_generated(pServer);
	namespace_AccessTSNDemo_generated(pServer);

	UA_Server_run_startup(pServer);
	bool running = true;
	double x = 0.0;

	// open and setup shm mapping
		printf("setting up shared memory");
		if (reader.flagmainout)
		{
			reader.mainout = (struct mk_mainoutput*) openShM(MK_MAINOUTKEY,
					sizeof(struct mk_mainoutput));
			if (NULL == reader.mainout)
				reader.flagmainout = false;
		}
		if (reader.flagmainin)
		{
			reader.mainin = (struct mk_maininput*) openShM(MK_MAININKEY,
					sizeof(struct mk_maininput));
			if (NULL == reader.mainin)
				reader.flagmainin = false;
		}
		if (reader.flagaddout)
		{
			reader.addout = (struct mk_additionaloutput*) openShM(MK_ADDAOUTKEY,
					sizeof(struct mk_additionaloutput));
			if (NULL == reader.addout)
				reader.flagaddout = false;
		}

	while (running = true) {
		//TODO write SHM into OPC
		UA_Server_run_iterate(pServer, false);
		UA_Variant doubleValue;
		UA_Variant boolValue;
		UA_Variant uint32;
		UA_Variant uint8;
		UA_Variant int32;

		/*TODO correct values
		 * correct xfault (change datatype or node)
		 * correct yfault (change datatype or node)
		 * correct zfault (change datatype or node)
		 *
		 * correct xenable (flip true and false)
		 * correct yenable (flip true and false)
		 * correct zenable (flip true and false)
		 * correct spindleenable (flip true and false)
		 *
		 * correct mode (change datatype or node, something seems to be connected to a value in the node [ 1 showed "mda"] )
		 * correct machinestatus (change datatype or node, something seems to be connected to a value in the node [ 2 showed "reset"] )
		 *
		 * correct lineno (guess the actualy choosen node usualy contains a g-code command)
		 */

		UA_Variant_setScalar(&boolValue, &reader.mainin->xfault, &UA_TYPES[UA_TYPES_BOOLEAN]);
		UA_Server_writeValue(pServer, UA_NODEID_NUMERIC(3, UA_ACCESSTSNDEMOID_ACCESSTSN_CNC_CNCAXISLIST_AXIS_X_ACTSTATUS), boolValue);

		UA_Variant_setScalar(&boolValue, &reader.mainout->xenable, &UA_TYPES[UA_TYPES_BOOLEAN]);
		UA_Server_writeValue(pServer, UA_NODEID_NUMERIC(3, UA_ACCESSTSNDEMOID_ACCESSTSN_CNC_CNCAXISLIST_AXIS_X_ISINACTIVE), boolValue);

		UA_Variant_setScalar(&doubleValue, &reader.mainin->xpos_cur, &UA_TYPES[UA_TYPES_DOUBLE]);
		UA_Server_writeValue(pServer, UA_NODEID_NUMERIC(3, UA_ACCESSTSNDEMOID_ACCESSTSN_CNC_CNCAXISLIST_AXIS_X_POSDIRECT_ACTPOS), doubleValue);

		UA_Variant_setScalar(&doubleValue, &reader.addout->xpos_set, &UA_TYPES[UA_TYPES_DOUBLE]);
		UA_Server_writeValue(pServer, UA_NODEID_NUMERIC(3, UA_ACCESSTSNDEMOID_ACCESSTSN_CNC_CNCAXISLIST_AXIS_X_POSDIRECT_CMDPOS), doubleValue);

		UA_Variant_setScalar(&boolValue, &reader.mainin->yfault, &UA_TYPES[UA_TYPES_BOOLEAN]);
		UA_Server_writeValue(pServer, UA_NODEID_NUMERIC(3, UA_ACCESSTSNDEMOID_ACCESSTSN_CNC_CNCAXISLIST_AXIS_Y_ACTSTATUS), boolValue);

		UA_Variant_setScalar(&boolValue, &reader.mainout->yenable, &UA_TYPES[UA_TYPES_BOOLEAN]);
		UA_Server_writeValue(pServer, UA_NODEID_NUMERIC(3, UA_ACCESSTSNDEMOID_ACCESSTSN_CNC_CNCAXISLIST_AXIS_Y_ISINACTIVE), boolValue);

		UA_Variant_setScalar(&doubleValue, &reader.mainin->ypos_cur, &UA_TYPES[UA_TYPES_DOUBLE]);
		UA_Server_writeValue(pServer, UA_NODEID_NUMERIC(3, UA_ACCESSTSNDEMOID_ACCESSTSN_CNC_CNCAXISLIST_AXIS_Y_POSDIRECT_ACTPOS), doubleValue);

		UA_Variant_setScalar(&doubleValue, &reader.addout->ypos_set, &UA_TYPES[UA_TYPES_DOUBLE]);
		UA_Server_writeValue(pServer, UA_NODEID_NUMERIC(3, UA_ACCESSTSNDEMOID_ACCESSTSN_CNC_CNCAXISLIST_AXIS_Y_POSDIRECT_CMDPOS), doubleValue);

		UA_Variant_setScalar(&boolValue, &reader.mainin->zfault, &UA_TYPES[UA_TYPES_BOOLEAN]);
		UA_Server_writeValue(pServer, UA_NODEID_NUMERIC(3, UA_ACCESSTSNDEMOID_ACCESSTSN_CNC_CNCAXISLIST_AXIS_Z_ACTSTATUS), boolValue);

		UA_Variant_setScalar(&boolValue, &reader.mainout->zenable, &UA_TYPES[UA_TYPES_BOOLEAN]);
		UA_Server_writeValue(pServer, UA_NODEID_NUMERIC(3, UA_ACCESSTSNDEMOID_ACCESSTSN_CNC_CNCAXISLIST_AXIS_Z_ISINACTIVE), boolValue);

		UA_Variant_setScalar(&doubleValue, &reader.mainin->zpos_cur, &UA_TYPES[UA_TYPES_DOUBLE]);
		UA_Server_writeValue(pServer, UA_NODEID_NUMERIC(3, UA_ACCESSTSNDEMOID_ACCESSTSN_CNC_CNCAXISLIST_AXIS_Z_POSDIRECT_ACTPOS), doubleValue);

		UA_Variant_setScalar(&doubleValue, &reader.addout->zpos_set, &UA_TYPES[UA_TYPES_DOUBLE]);
		UA_Server_writeValue(pServer, UA_NODEID_NUMERIC(3, UA_ACCESSTSNDEMOID_ACCESSTSN_CNC_CNCAXISLIST_AXIS_Z_POSDIRECT_CMDPOS), doubleValue);

		UA_Variant_setScalar(&uint8, &reader.addout->mode, &UA_TYPES[UA_TYPES_INT32]);
		UA_Server_writeValue(pServer, UA_NODEID_NUMERIC(3, UA_ACCESSTSNDEMOID_ACCESSTSN_CNC_CNCCHANNELLIST_CHANNEL_1_ACTOPERATIONMODE), uint8);

		UA_Variant_setScalar(&boolValue, &reader.mainout->machinestatus, &UA_TYPES[UA_TYPES_INT32]);
		UA_Server_writeValue(pServer, UA_NODEID_NUMERIC(3, UA_ACCESSTSNDEMOID_ACCESSTSN_CNC_CNCCHANNELLIST_CHANNEL_1_ACTSTATUS), boolValue);

		UA_Variant_setScalar(&doubleValue, &reader.addout->feedrate, &UA_TYPES[UA_TYPES_DOUBLE]);
		UA_Server_writeValue(pServer, UA_NODEID_NUMERIC(3, UA_ACCESSTSNDEMOID_ACCESSTSN_CNC_CNCCHANNELLIST_CHANNEL_1_CMDFEEDRATE), doubleValue);

		UA_Variant_setScalar(&doubleValue, &reader.addout->feedoverride, &UA_TYPES[UA_TYPES_DOUBLE]);
		UA_Server_writeValue(pServer, UA_NODEID_NUMERIC(3, UA_ACCESSTSNDEMOID_ACCESSTSN_CNC_CNCCHANNELLIST_CHANNEL_1_CMDOVERRIDE), doubleValue);

		UA_Variant_setScalar(&int32, &reader.addout->lineno, &UA_TYPES[UA_TYPES_INT32]);
		UA_Server_writeValue(pServer, UA_NODEID_NUMERIC(3, UA_ACCESSTSNDEMOID_ACCESSTSN_CNC_CNCSPINDLELIST_SPINDLE_1_ACTMAINPROGRAMLINE), int32);

		UA_Variant_setScalar(&boolValue, &reader.mainout->spindlebrake, &UA_TYPES[UA_TYPES_BOOLEAN]);
		UA_Server_writeValue(pServer, UA_NODEID_NUMERIC(3, UA_ACCESSTSNDEMOID_ACCESSTSN_CNC_CNCSPINDLELIST_SPINDLE_1_BLOCKMODE), boolValue);

		UA_Variant_setScalar(&doubleValue, &reader.mainout->spindlespeed, &UA_TYPES[UA_TYPES_DOUBLE]);
		UA_Server_writeValue(pServer, UA_NODEID_NUMERIC(3, UA_ACCESSTSNDEMOID_ACCESSTSN_CNC_CNCSPINDLELIST_SPINDLE_1_CMDSPEED), doubleValue);

		UA_Variant_setScalar(&boolValue, &reader.mainout->spindleenable, &UA_TYPES[UA_TYPES_BOOLEAN]);
		UA_Server_writeValue(pServer, UA_NODEID_NUMERIC(3, UA_ACCESSTSNDEMOID_ACCESSTSN_CNC_CNCSPINDLELIST_SPINDLE_1_ISINACTIVE), boolValue);

		UA_Variant_setScalar(&uint32, &reader.addout->tool, &UA_TYPES[UA_TYPES_UINT32]);
		UA_Server_writeValue(pServer, UA_NODEID_NUMERIC(3, UA_ACCESSTSNDEMOID_ACCESSTSN_CNC_CNCCHANNELLIST_CHANNEL_1_TOOLID), uint32);

		/* TODO add missing values
		 *
		 * Missing values:
		 *
		 * xvel_set
		 * yvel_set
		 * zvel_set
		 * estopstatus
		 * uptime
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

	UA_Server_run_shutdown(pServer);
	UA_Server_delete(pServer);
	return 0;

}
