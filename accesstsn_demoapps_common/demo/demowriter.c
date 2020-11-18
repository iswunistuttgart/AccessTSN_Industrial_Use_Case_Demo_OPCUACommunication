// SPDX-License-Identifier: (MIT)
/*
 * Copyright (c) 2020 Institute for Control Engineering of Machine Tools and Manufacturing Units, University of Stuttgart
 * Author: Philipp Neher <philipp.neher@isw.uni-stuttgart.de>
 */

/* SHM-Demoapplication to create random values and put them into shared memory 
 * 
 * Usage:
 * -o           Create main output variables from control
 * -i           Create main input variables to control
 * -a           Create additional output variables from control
 * -t [value]   Specifies update-period in milliseconds. Default 10 seconds
 * -h           Prints this help message and exits
 * 
 */

#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <signal.h>
#include <time.h>
#include "../../nc_machine/example/src_generated/mk_shminterface.h"

uint8_t run = 1;
struct demowriter_t {
        struct mk_mainoutput * mainout;
        struct mk_maininput * mainin;
        struct mk_additionaloutput * addout;
        uint32_t period;
        bool flagmainout;
        bool flagmainin;
        bool flagaddout;
};

/* Opens a shared memory (write) and created it if necessary */
void* openShM(const char* name, uint32_t size)
{
        int fd;
        void* shm;
        fd = shm_open(name, O_RDWR | O_CREAT, 700);
        if (fd == -1) {
                perror("SHM Open failed");
                return(NULL);
        }
        ftruncate(fd,size);
        shm = mmap(NULL, size, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);
        if (MAP_FAILED == shm) {
                perror("SHM Map failed");
                shm = NULL;
                shm_unlink(name);
        }
        return shm;
}

/* Closes a shared memroy */
void* closeShM(const char* name)
{
        shm_unlink(name);
}

/* signal handler */
void sigfunc(int sig)
{
        switch(sig)
        {
        case SIGINT:
                if(run)
                        run = 0;
                else
                        exit(0);
                break;
        case SIGTERM:
                run = 0;
                break;        
        }
}

/* Print usage message */
static void usage(char *appname)
{
        fprintf(stderr,
                "\n"
                "Usage: %s [options]\n"
                " -o            Create main output variables from control\n"
                " -i            Create main input variables to control\n"
                " -a            Create additional output variables from control\n"
                " -t [value]    Specifies update-period in milliseconds. Default 10 seconds.\n"
                " -h            Prints this help message and exits\n"
                "\n",
                appname);
}

/* Evaluate CLI-parameters */
void evalCLI(int argc, char* argv[0],struct demowriter_t * writer)
{
        int c;
        char* appname = strrchr(argv[0], '/');
        appname = appname ? 1 + appname : argv[0];
        while (EOF != (c = getopt(argc,argv,"oiaht:"))) {
                switch(c) {
                case 'o':
                        (*writer).flagmainout = true;
                        break;
                case 'i':
                        (*writer).flagmainin = true;
                        break;
                case 'a':
                        (*writer).flagaddout = true;
                        break;
                case 't':
                        (*writer).period = atoi(optarg)*1000;
                        break;
                case 'h':
                default:
                        usage(appname);
                        exit(0);
                        break;
                }
        }
        if (((*writer).flagmainout == false) && ((*writer).flagmainin == false) && ((*writer).flagaddout) == false) {
                printf("At minium, one block of variables needs to be selected\n");
                exit(0);
        };

}

int main(int argc, char* argv[])
{
        struct demowriter_t writer;
        writer.flagaddout = false;
        writer.flagmainout = false;
        writer.flagmainin = false;
        writer.period = 10000000;       // 10 seconds 
        time_t now;
        struct tm now_local;
        int randhalf;
        randhalf = RAND_MAX/2;

        evalCLI(argc,argv,&writer);

        //register signal handlers
        signal(SIGTERM, sigfunc);
        signal(SIGINT, sigfunc);

        // open and setup shm mapping
        if (writer.flagmainout) {
                writer.mainout = (struct mk_mainoutput *) openShM(MK_MAINOUTKEY,sizeof(struct mk_mainoutput));
                if (NULL == writer.mainout)
                        writer.flagmainout = false;
        }
        if (writer.flagmainin) {
                writer.mainin = (struct mk_maininput *) openShM(MK_MAININKEY,sizeof(struct mk_maininput));
                if (NULL == writer.mainin)
                        writer.flagmainin = false;
        }
        if (writer.flagaddout) {
                writer.addout = (struct mk_additionaloutput *) openShM(MK_ADDAOUTKEY,sizeof(struct mk_additionaloutput));
                if (NULL == writer.addout)
                        writer.flagaddout = false;
        }

        //initialize rand-function
        srand((unsigned) time(&now));
        
        // mainloop
        while(run) {
                now = time(NULL);
                now_local = *localtime(&now);
                if (writer.flagmainout){
                        printf("\n##### Main Output Variables: (at %02d:%02d:%02d) #####\n", now_local.tm_hour, now_local.tm_min, now_local.tm_sec);
                        writer.mainout->xvel_set = (double) (rand() * 0.000001);
                        writer.mainout->yvel_set = (double) (rand() * 0.000001);
                        writer.mainout->zvel_set = (double) (rand() * 0.000001);
                        writer.mainout->spindlespeed = (double) (rand() * 0.000001);
                        printf("X-Velocity Setpoint: %f;        Y-Velocity Setpoint: %f;        Z-Velocity Setpoint: %f;        Spindlespeed Setpoint: %f\n",writer.mainout->xvel_set,writer.mainout->yvel_set,writer.mainout->zvel_set,writer.mainout->spindlespeed);
                        writer.mainout->xenable = rand() > randhalf;
                        writer.mainout->yenable = rand() > randhalf;
                        writer.mainout->zenable = rand() > randhalf;
                        writer.mainout->spindleenable = rand() > randhalf;
                        printf("X-Axis enabled: %s;             Y-Axis enabled: %s;             Z-Axis enabled: %s;             Spindle enabled: %s\n",writer.mainout->xenable ? "true" : "false",writer.mainout->yenable ? "true" : "false",writer.mainout->zenable ? "true" : "false",writer.mainout->spindleenable ? "true" : "false");
                        writer.mainout->spindlebrake = rand() > randhalf;
                        writer.mainout->machinestatus = rand() > randhalf;
                        writer.mainout->estopstatus = rand() > randhalf;
                        printf("Spindlebranke engaged: %s;      Machine on: %s;                 Emergency Stop activated: %s\n",writer.mainout->spindlebrake ? "true" : "false",writer.mainout->machinestatus ? "true" : "false",writer.mainout->estopstatus ? "true" : "false");
                }
                
                if (writer.flagaddout){
                        printf("\n##### Additional Output Variables: (at %02d:%02d:%02d) #####\n", now_local.tm_hour, now_local.tm_min, now_local.tm_sec);
                        writer.addout->xpos_set = (double) (rand() * 0.000001);
                        writer.addout->ypos_set = (double) (rand() * 0.000001);
                        writer.addout->zpos_set = (double) (rand() * 0.000001);
                        writer.addout->feedrate = (double) (rand() * 0.000001);
                        printf("X-Position Setpoint: %f;         Y-Position Setpoint: %f;        Z-Position Setpoint: %f;        Feedrate planned: %f\n",writer.addout->xpos_set,writer.addout->ypos_set,writer.addout->zpos_set,writer.addout->feedrate);
                        writer.addout->xhome = rand() > randhalf;
                        writer.addout->yhome = rand() > randhalf;
                        writer.addout->zhome = rand() > randhalf;
                        writer.addout->feedoverride = (double) (rand() * 0.000001);
                        printf("X-Axis at home: %s;              Y-Axis at home: %s;             Z-Axis at home: %s;             Feedrate override: %f\n",writer.addout->xhome ? "true" : "false",writer.addout->yhome ? "true" : "false",writer.addout->zhome ? "true" : "false",writer.addout->feedoverride);
                        writer.addout->xhardneg = rand() > randhalf;
                        writer.addout->yhardneg = rand() > randhalf;
                        writer.addout->zhardneg = rand() > randhalf;
                        printf("X-Axis at neg Endstop: %s;       Y-Axis at neg Endstop: %s;      Z-Axis at neg Endstop: %s\n",writer.addout->xhardneg ? "true" : "false",writer.addout->yhardneg ? "true" : "false",writer.addout->zhardneg ? "true" : "false");
                        writer.addout->xhardpos = rand() > randhalf;
                        writer.addout->yhardpos = rand() > randhalf;
                        writer.addout->zhardpos = rand() > randhalf;
                        printf("X-Axis at pos Endstop: %s;       Y-Axis at pos Endstop: %s;      Z-Axis at pos Endstop: %s\n",writer.addout->xhardpos ? "true" : "false",writer.addout->yhardpos ? "true" : "false",writer.addout->zhardpos ? "true" : "false");
                        writer.addout->lineno = rand();
                        writer.addout->uptime = rand();
                        writer.addout->tool = rand ();
                        writer.addout->mode = rand() %4 +1;
                        printf("Current Line Number: %d;         Uptime: %d;                     Tool Number: %d;                Mode: %d\n",writer.addout->lineno,writer.addout->uptime,writer.addout->tool,writer.addout->mode);
                }
                if (writer.flagmainin){
                        printf("\n##### Main Input Variables: (at %02d:%02d:%02d) #####\n", now_local.tm_hour, now_local.tm_min, now_local.tm_sec);
                        writer.mainin->xpos_cur = (double) (rand() * 0.000001);
                        writer.mainin->ypos_cur = (double) (rand() * 0.000001);
                        writer.mainin->zpos_cur = (double) (rand() * 0.000001);
                        printf("X-Position Current: %f;         Y-Position Current: %f;        Z-Position Current: %f;\n",writer.mainin->xpos_cur,writer.mainin->ypos_cur,writer.mainin->zpos_cur);
                        writer.mainin->xfault = rand() > randhalf;
                        writer.mainin->yfault = rand() > randhalf;
                        writer.mainin->zfault = rand() > randhalf;
                        printf("X-Axis faulty: %s;              Y-Axis faulty: %s;             Z-Axis faulty: %s;\n",writer.mainin->xfault ? "true" : "false",writer.mainin->yfault ? "true" : "false",writer.mainin->zfault ? "true" : "false");
                }
                
                usleep(writer.period);
        }

        // cleanup
        if (writer.flagmainout)
                closeShM(MK_MAINOUTKEY);
        if (writer.flagmainin)
                closeShM(MK_MAININKEY);
        if (writer.flagaddout)
                closeShM(MK_ADDAOUTKEY);

        return 0;
}
