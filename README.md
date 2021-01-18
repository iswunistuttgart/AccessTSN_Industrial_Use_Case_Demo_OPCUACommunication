# AccessTSN Industrial Use Case Demo - OPC UA Communication
This is a demonstration to give an example on how to use Linux with the current support for Time Sensitive Networking (TSN) as an industrial endpoint. For this purpose the components of this demonstration form a converged network use case in an industrial setting. 

The Use Case Demonstration is aimed at the AccessTSN Endpoint Image and is tested with but should also work independently from the image.

This work is a result of the AccessTSN-Project. More information on the project as well as contact information are on the project's webpage: https://accesstsn.com

## Structure of the Industrial Use Case Demo Git-projects

The AccessTSN Industrial Use Case Demo consists of multiple Git-projects, each holding the code to one component of the demonstration. This repository contains an OPC UA-Server to get access to the values from shared memory (read only for now). It also contains a demo for UaExpert to visualize the data. The OPC UA is based on the open62541-Project.

The main repository for AccessTSN Industrial Use Case Demo can be found on Github: https://github.com/iswunistuttgart/AccessTSN_Industrial_Use_Case_Demo

# Installation
Get the repository and all submodules with:
git clone --recurse-submodules <INSERT_REPO>
Install open62541 framework according to [open62541 documentation](https://open62541.org/doc/open62541-current.pdf). Do not install the framework into the this git project or you might encounter errors when you try running the server.
Switch to directory `_/nc_machine/example_`
copy file `__/src_generated/Opc.Ua.CNC.NodeSet.bsd` to `/usr/local/share/open62541/tools/ua-nodeset/CNC/_`
Run command `cmake -B build`
Switch to directory `/build`
Run command `make`


# Start the application
Start the server `Access_TSN_Demo`
Connect a viewer like UaExpert and check the values.
An example file for UaExpert with working variables can be found in the root of this project named `AccessTSNDemoServer.uap`

UaExpert can be obtained [here](https://www.unified-automation.com/de/downloads/opc-ua-clients.html)
If you have no application writing into the shared memory defined in `mk_shminterface` you can build and start the application `demowriter` in directory `accesstsn_demoapps_common/demo`

# Tested Version
The initial released version is tested with
Debian GNU/Linux 10 (buster)
open62541 @ f85adb7b
accesstsn_demoapps_common @ 42cc7fff
UaExpert-1.5.1-331-x86_64.AppImage
