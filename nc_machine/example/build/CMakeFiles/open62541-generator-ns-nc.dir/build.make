# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/nb/eclipse-workspace/accesstsn_demoapps_opcuaserver/nc_machine/example

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/nb/eclipse-workspace/accesstsn_demoapps_opcuaserver/nc_machine/example/build

# Utility rule file for open62541-generator-ns-nc.

# Include the progress variables for this target.
include CMakeFiles/open62541-generator-ns-nc.dir/progress.make

CMakeFiles/open62541-generator-ns-nc: ../src_generated/namespace_nc_generated.c
CMakeFiles/open62541-generator-ns-nc: ../src_generated/namespace_nc_generated.h


../src_generated/namespace_nc_generated.c: /usr/local/share/open62541/tools/nodeset_compiler/nodeset_compiler.py
../src_generated/namespace_nc_generated.c: /usr/local/share/open62541/tools/nodeset_compiler/nodes.py
../src_generated/namespace_nc_generated.c: /usr/local/share/open62541/tools/nodeset_compiler/nodeset.py
../src_generated/namespace_nc_generated.c: /usr/local/share/open62541/tools/nodeset_compiler/datatypes.py
../src_generated/namespace_nc_generated.c: /usr/local/share/open62541/tools/nodeset_compiler/backend_open62541.py
../src_generated/namespace_nc_generated.c: /usr/local/share/open62541/tools/nodeset_compiler/backend_open62541_nodes.py
../src_generated/namespace_nc_generated.c: /usr/local/share/open62541/tools/nodeset_compiler/backend_open62541_datatypes.py
../src_generated/namespace_nc_generated.c: /usr/local/share/open62541/tools/ua-nodeset/CNC/Opc.Ua.CNC.NodeSet.xml
../src_generated/namespace_nc_generated.c: /usr/local/share/open62541/tools/ua-nodeset/Schema/Opc.Ua.NodeSet2.xml
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/nb/eclipse-workspace/accesstsn_demoapps_opcuaserver/nc_machine/example/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating ../src_generated/namespace_nc_generated.c, ../src_generated/namespace_nc_generated.h"
	/usr/bin/python /usr/local/share/open62541/tools/nodeset_compiler/nodeset_compiler.py --types-array=UA_TYPES --types-array=UA_TYPES_NC --existing=/usr/local/share/open62541/tools/ua-nodeset/Schema/Opc.Ua.NodeSet2.xml --xml=/usr/local/share/open62541/tools/ua-nodeset/CNC/Opc.Ua.CNC.NodeSet.xml /home/nb/eclipse-workspace/accesstsn_demoapps_opcuaserver/nc_machine/example/src_generated/namespace_nc_generated

../src_generated/namespace_nc_generated.h: ../src_generated/namespace_nc_generated.c
	@$(CMAKE_COMMAND) -E touch_nocreate ../src_generated/namespace_nc_generated.h

open62541-generator-ns-nc: CMakeFiles/open62541-generator-ns-nc
open62541-generator-ns-nc: ../src_generated/namespace_nc_generated.c
open62541-generator-ns-nc: ../src_generated/namespace_nc_generated.h
open62541-generator-ns-nc: CMakeFiles/open62541-generator-ns-nc.dir/build.make

.PHONY : open62541-generator-ns-nc

# Rule to build all files generated by this target.
CMakeFiles/open62541-generator-ns-nc.dir/build: open62541-generator-ns-nc

.PHONY : CMakeFiles/open62541-generator-ns-nc.dir/build

CMakeFiles/open62541-generator-ns-nc.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/open62541-generator-ns-nc.dir/cmake_clean.cmake
.PHONY : CMakeFiles/open62541-generator-ns-nc.dir/clean

CMakeFiles/open62541-generator-ns-nc.dir/depend:
	cd /home/nb/eclipse-workspace/accesstsn_demoapps_opcuaserver/nc_machine/example/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/nb/eclipse-workspace/accesstsn_demoapps_opcuaserver/nc_machine/example /home/nb/eclipse-workspace/accesstsn_demoapps_opcuaserver/nc_machine/example /home/nb/eclipse-workspace/accesstsn_demoapps_opcuaserver/nc_machine/example/build /home/nb/eclipse-workspace/accesstsn_demoapps_opcuaserver/nc_machine/example/build /home/nb/eclipse-workspace/accesstsn_demoapps_opcuaserver/nc_machine/example/build/CMakeFiles/open62541-generator-ns-nc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/open62541-generator-ns-nc.dir/depend
