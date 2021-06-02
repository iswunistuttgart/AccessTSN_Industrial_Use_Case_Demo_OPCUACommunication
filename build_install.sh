#!/bin/bash
echo "Installing and building the OPCUA Component of the AccessTSN Industrial Use Case Demo and its dependencies"
OPEN62541INSTALL=$1
OPEN62541PATH="/usr/local/share/open62541/"
while [ -z "$OPEN62541INSTALL" ]
   do
      echo "Should the open62541 framework be installed? Yes/No"
      read -p "Selection: " OPEN62541INSTALL

      case $OPEN62541INSTALL in
          Yes|yes|Y|y) OPEN62541INSTALL="o"
          ;;
          No|no|N|n) OPEN62541INSTALL="n"
          ;;
          *) echo "Unkown choice"
             OPEN62541INSTALL=""
          ;;
      esac
done
STARTPATH=${PWD}

echo "Checking for prerequisites"

if ! command -v apt &> /dev/null
   then
       echo "Error: git not found! Please install apt."
       exit 1
   else
       echo "apt found"
fi

if ! command -v git &> /dev/null
   then
       echo "Error: git not found! Please install git."
       exit 1
   else
       echo "git found"
fi

if ! command -v gcc &> /dev/null
   then
       echo "Error: gcc not found! Please install gcc."
       exit 1
   else
       echo "gcc found"
fi

if ! command -v make &> /dev/null
   then
       echo "Error: make not found! Please install make."
       exit 1
   else
       echo "make found"
fi

if ! command -v dpkg &> /dev/null
   then
       echo "Error: dpkg not found! Please install dpkg."
       exit 1
   else
       echo "dpkg found"
fi

if ! command -v grep &> /dev/null
   then
       echo "Error: grep not found! Please install grep."
       exit 1
   else
       echo "grep found"
fi

dpkg -s build-essential &> /dev/null
rtn=$?
if [ $rtn -eq 0 ]
   then
       echo "build-essential installed"
   else
       echo "Error: build-essential not installed! Please install build-essential."
       exit 1
fi

echo "Installing prerequisites of open62541."
    sudo apt update
    sudo apt install pkg-config cmake python
echo "Checking for prerequisites finished."

case $OPEN62541INSTALL in
    n) echo "The open62541 shall not be installed, checking if it is available."
       while ! [ -d $OPEN62541PATH ]
       do 
           echo "Open62541 not found in standard path. Please provide install path."
           read -p "Open62541 path: " OPEN62541PATH
           if [ $OPEN62541PATH="Quit" ]
                 then
                      exit 1
	   fi
       done
       echo "Path to open62541 found."
       ;;
    o) echo "Installing open62541 framework."
       echo "Cloning open62541 project into home directory and chekcing out tag v1.2.1"
       cd ~
       mkdir open62541
       git clone -b v1.2.1 https://github.com/open62541/open62541.git open62541
       cd open62541
       git submodule update --init --recursive
       echo "Building version v1.2.1 of open62541 project with multithreading support."
       mkdir build
       cd build
       cmake -DBUILD_SHARED_LIBS=ON -DCMAKE_BUILD_TYPE=RelWithDebInfo -DUA_NAMESPACE_ZERO=FULL -DUA_MULTITHREADING=100 -DOPEN62541_VERSION=v1.2.1 ..
       make
       echo "Installing open62541 into standard directory."
       sudo make install
       echo "Installation of open62541 framework finished."
       ;;
    *) echo "Unkown choice."
       exit 1
       ;;
esac

cd $STARTPATH
echo "Building the OPC UA Component of the AccessTSN Industrial Use Case Demo."
if ! [ -d ./nc_machine/example ]
    then
        echo "AccessTSN Industrial Use Case Demo - OPC UA Communication not found. Cloning into new subdirectory"
        git clone https://github.com/iswunistuttgart/AccessTSN_Industrial_Use_Case_Demo_OPCUACommunication.git
        cd AccessTSN_Industrial_Use_Case_Demo_OPCUACommunication
fi

git submodule update --init --recursive
cd nc_machine/example
echo "Copying CNC nodeset to open62541 install path."
if ! [ -d $OPEN62541PATH/tools/ua-nodeset/CNC/ ]
    then
        echo "Error: Path for CNC nodeset not found in given open62541 path."
        exit 1
fi
sudo cp src_generated/Opc.Ua.CNC.NodeSet.bsd $OPEN62541PATH/tools/ua-nodeset/CNC/
echo "Build AccessTSN Industrial Use Case Demo OPC UA Server."
cmake -B build
cd build
make

echo "Finished building OPC UA Server. It can be found in 'nc_machine/example/build'"
echo "Server can be started with: 'sudo ./Access_TSN_Demo'."
echo "It need an application to write values to the used shared memory. For tests build and use the demowriter application in the 'accesstsn common' submodule."
echo "Values should be viewable with a OPC UA Viewer like UAExpert."
echo "Finished building ans installing AccessTSN Industrial Use Case Demo - OPC UA Communication."




