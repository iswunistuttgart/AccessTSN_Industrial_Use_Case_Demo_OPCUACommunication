// SPDX-License-Identifier: (MIT)
/*
 * Copyright (c) 2020 Institute for Control Engineering of Machine Tools and Manufacturing Units, University of Stuttgart
 * Author: Philipp Neher <philipp.neher@isw.uni-stuttgart.de>
 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

/* Shared-Memory-Interface between Machinekit and various other programs
 *
 * This decribes a Shared-Memory-Interface between Machinekit and various other 
 * programs, e.g. a TSN-RT-Interface or OPC UA Server, which are used in
 * conjunction to demonstrate a converged network scenario in an industrial
 * environment. This work was done in the context of the AccessTSN project and 
 * is part of the AccessTSN-Demo-Image.
 */

#ifndef _MK_SHMINTERFACE_H_
#define _MK_SHMINTERFACE_H_

#include <linux/types.h>
#include <stdbool.h>
#include <stdint.h>

// Names of shared memories
#define MK_MAINOUTKEY "MK_MAINOUT"
#define MK_ADDAOUTKEY "MK_ADDOUT"
#define MK_MAININKEY "MK_MAININ"

// struct of main variables which are written by machinekit
struct __attribute__((__packed__)) mk_mainoutput {
	double xvel_set;		//commanded x-Velocity; set-value from control
	double yvel_set;		//commanded y-Velocity; set-value from control
	double zvel_set;		//commanded z-Velocity; set-value from control
	double spindlespeed;		//commanded Speed of Spindle; set-value from control
	bool xenable;			//Enable of X-Drive, True if allowed to run
	bool yenable;			//Enable of Y-Drive, True if allowed to run
	bool zenable;			//Enable of Z-Drive, True if allowed to run
	bool spindleenable;		//Enable of spindle, True if allowed to run
	bool spindlebrake;		//Brake of Spindle, True if engaged; set-value from control
	bool machinestatus;		//Status of Machine, True if machine is powered on
	bool estopstatus;		//Status of Emergencystop, True if Emergency stop is activated
};

// struct of additional variables which are written by machinekit
struct __attribute__ ((__packed__)) mk_additionaloutput {
	double feedrate;		//calculated planned feedrate
	double feedoverride;		//value of feed override
	double xpos_set;		//commanded x-Position; set-value from control
	double ypos_set;		//commanded y-Position; set-value from control
	double zpos_set;		//commanded z-Position; set-value from control
	int32_t lineno;			//currently active program-line
	int32_t uptime;			//uptime of machine 
	uint32_t tool;			//number of current tool
	uint8_t mode;          		 //Operationmode: 1 = auto, 2 = mdi, 4 = manual
	bool xhome;			//Homeposition of x-axis, True if currently at home position
	bool yhome;			//Homeposition of y-axis, True if currently at home position
	bool zhome;			//Homeposition of z-axis, True if currently at home position
	bool xhardneg;			//Negative Hard limit of X-Axis, True if currently at negative limit
	bool xhardpos;			//Positiv Hard limit of X-Axis, True if currently at positiv limit
	bool yhardneg;			//Negative Hard limit of X-Axis, True if currently at negative limit
	bool yhardpos;			//Positiv Hard limit of X-Axis, True if currently at positiv limit
	bool zhardneg;			//Negative Hard limit of X-Axis, True if currently at negative limit
	bool zhardpos;			//Positiv Hard limit of X-Axis, True if currently at positiv limit
};

// struct of main variables which are read by machinekit
struct __attribute__ ((__packed__)) mk_maininput {
	double xpos_cur;	//actual x-Position; feedback from the drive
	double ypos_cur;	//actual y-Position; feedback from the drive
	double zpos_cur;	//actual z-Position; feedback from the drive
	bool xfault;		//Fault of X-Drive, True if fault occured
	bool yfault;		//Fault of Y-Drive, True if fault occured
	bool zfault;		//Fault of Z-Drive, True if fault occured
};

#endif /* _MK_SHMINTERFACE_H_ */