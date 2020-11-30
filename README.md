# AccessTSN_demoapps_OPCUAserver

This repository contains an OPCUA-Server to get access to the values from shared memory (read only for now). It also contains a demo for UaExpert to visualize the data.

# Installation
Get the repository and all submodules with:
git clone --recurse-submodules <INSERT_REPO>
Install open62541 framework according to [open62541 documentation](https://open62541.org/doc/open62541-current.pdf). Do not install the framework into the this git project or you might encounter errors when you try running the server.
Switch to directory '_/nc_machine/example_'
Run command 'cmake -B build'
Switch to directory '/build'
Run command 'make'

# Start the application
Start the server 'Access_TSN_Demo'
Connect a viewer like UaExpert and check the values.
An example file for UaExpert with working variables can be found in the root of this project named 'AccessTSNDemoServer.uap'

UaExpert can be obtained [here](https://www.unified-automation.com/de/downloads/opc-ua-clients.html)
If you have no application writing into the shared memory defined in 'mk_shminterface' you can build and start the application 'demowriter' in directory 'accesstsn_demoapps_common/demo'

# Tested Version
The initial released version is tested with
Debian GNU/Linux 10 (buster)
open62541 @ f85adb7b
accesstsn_demoapps_common @ 42cc7fff
UaExpert-1.5.1-331-x86_64.AppImage
