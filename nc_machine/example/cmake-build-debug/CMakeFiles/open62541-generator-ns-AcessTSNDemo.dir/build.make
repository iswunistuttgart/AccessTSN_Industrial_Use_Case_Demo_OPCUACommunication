# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Produce verbose output by default.
VERBOSE = 1

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.1\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.1\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\codelab\NC_Maschine\example

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\codelab\NC_Maschine\example\cmake-build-debug

# Utility rule file for open62541-generator-ns-AcessTSNDemo.

# Include the progress variables for this target.
include CMakeFiles/open62541-generator-ns-AcessTSNDemo.dir/progress.make

CMakeFiles/open62541-generator-ns-AcessTSNDemo: ../src_generated/namespace_AcessTSNDemo_generated.c
CMakeFiles/open62541-generator-ns-AcessTSNDemo: ../src_generated/namespace_AcessTSNDemo_generated.h


../src_generated/namespace_AcessTSNDemo_generated.c: D:/codelab/glas_opcua_server/install-debug/share/open62541/tools/nodeset_compiler/nodeset_compiler.py
../src_generated/namespace_AcessTSNDemo_generated.c: D:/codelab/glas_opcua_server/install-debug/share/open62541/tools/nodeset_compiler/nodes.py
../src_generated/namespace_AcessTSNDemo_generated.c: D:/codelab/glas_opcua_server/install-debug/share/open62541/tools/nodeset_compiler/nodeset.py
../src_generated/namespace_AcessTSNDemo_generated.c: D:/codelab/glas_opcua_server/install-debug/share/open62541/tools/nodeset_compiler/datatypes.py
../src_generated/namespace_AcessTSNDemo_generated.c: D:/codelab/glas_opcua_server/install-debug/share/open62541/tools/nodeset_compiler/backend_open62541.py
../src_generated/namespace_AcessTSNDemo_generated.c: D:/codelab/glas_opcua_server/install-debug/share/open62541/tools/nodeset_compiler/backend_open62541_nodes.py
../src_generated/namespace_AcessTSNDemo_generated.c: D:/codelab/glas_opcua_server/install-debug/share/open62541/tools/nodeset_compiler/backend_open62541_datatypes.py
../src_generated/namespace_AcessTSNDemo_generated.c: ../models/accesstsn_demo.xml
../src_generated/namespace_AcessTSNDemo_generated.c: D:/codelab/glas_opcua_server/install-debug/share/open62541/tools/ua-nodeset/Schema/Opc.Ua.NodeSet2.xml
../src_generated/namespace_AcessTSNDemo_generated.c: D:/codelab/glas_opcua_server/install-debug/share/open62541/tools/ua-nodeset/CNC/Opc.Ua.CNC.NodeSet.xml
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=D:\codelab\NC_Maschine\example\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating ../src_generated/namespace_AcessTSNDemo_generated.c, ../src_generated/namespace_AcessTSNDemo_generated.h"
	C:\ProgramData\Anaconda3\python.exe D:/codelab/glas_opcua_server/install-debug/share/open62541/tools/nodeset_compiler/nodeset_compiler.py --types-array=UA_TYPES --types-array=UA_TYPES_NC --types-array=UA_TYPES_ACESSTSNDEMO --existing=D:/codelab/glas_opcua_server/install-debug/share/open62541/tools/ua-nodeset/Schema/Opc.Ua.NodeSet2.xml --existing=D:/codelab/glas_opcua_server/install-debug/share/open62541/tools/ua-nodeset/CNC/Opc.Ua.CNC.NodeSet.xml --xml=D:/codelab/NC_Maschine/example/models/accesstsn_demo.xml D:/codelab/NC_Maschine/example/src_generated/namespace_AcessTSNDemo_generated

../src_generated/namespace_AcessTSNDemo_generated.h: ../src_generated/namespace_AcessTSNDemo_generated.c
	@$(CMAKE_COMMAND) -E touch_nocreate ..\src_generated\namespace_AcessTSNDemo_generated.h

open62541-generator-ns-AcessTSNDemo: CMakeFiles/open62541-generator-ns-AcessTSNDemo
open62541-generator-ns-AcessTSNDemo: ../src_generated/namespace_AcessTSNDemo_generated.c
open62541-generator-ns-AcessTSNDemo: ../src_generated/namespace_AcessTSNDemo_generated.h
open62541-generator-ns-AcessTSNDemo: CMakeFiles/open62541-generator-ns-AcessTSNDemo.dir/build.make

.PHONY : open62541-generator-ns-AcessTSNDemo

# Rule to build all files generated by this target.
CMakeFiles/open62541-generator-ns-AcessTSNDemo.dir/build: open62541-generator-ns-AcessTSNDemo

.PHONY : CMakeFiles/open62541-generator-ns-AcessTSNDemo.dir/build

CMakeFiles/open62541-generator-ns-AcessTSNDemo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\open62541-generator-ns-AcessTSNDemo.dir\cmake_clean.cmake
.PHONY : CMakeFiles/open62541-generator-ns-AcessTSNDemo.dir/clean

CMakeFiles/open62541-generator-ns-AcessTSNDemo.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\codelab\NC_Maschine\example D:\codelab\NC_Maschine\example D:\codelab\NC_Maschine\example\cmake-build-debug D:\codelab\NC_Maschine\example\cmake-build-debug D:\codelab\NC_Maschine\example\cmake-build-debug\CMakeFiles\open62541-generator-ns-AcessTSNDemo.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/open62541-generator-ns-AcessTSNDemo.dir/depend

