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

# Include any dependencies generated for this target.
include CMakeFiles/AccessTSNLib.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/AccessTSNLib.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/AccessTSNLib.dir/flags.make

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

../src_generated/types_nc_generated.c: /usr/local/share/open62541/tools/generate_datatypes.py
../src_generated/types_nc_generated.c: /usr/local/share/open62541/tools/ua-nodeset/CNC/Opc.Ua.CNC.NodeSet.bsd
../src_generated/types_nc_generated.c: /usr/local/share/open62541/tools/ua-nodeset/CNC/Opc.Ua.CNC.NodeIds.csv
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/nb/eclipse-workspace/accesstsn_demoapps_opcuaserver/nc_machine/example/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating ../src_generated/types_nc_generated.c, ../src_generated/types_nc_generated.h, ../src_generated/types_nc_generated_handling.h, ../src_generated/types_nc_generated_encoding_binary.h"
	/usr/bin/python /usr/local/share/open62541/tools/generate_datatypes.py --namespaceMap=2:http://opcfoundation.org/UA/CNC --type-bsd=/usr/local/share/open62541/tools/ua-nodeset/CNC/Opc.Ua.CNC.NodeSet.bsd --type-csv=/usr/local/share/open62541/tools/ua-nodeset/CNC/Opc.Ua.CNC.NodeIds.csv --no-builtin /home/nb/eclipse-workspace/accesstsn_demoapps_opcuaserver/nc_machine/example/src_generated/types_nc

../src_generated/types_nc_generated.h: ../src_generated/types_nc_generated.c
	@$(CMAKE_COMMAND) -E touch_nocreate ../src_generated/types_nc_generated.h

../src_generated/types_nc_generated_handling.h: ../src_generated/types_nc_generated.c
	@$(CMAKE_COMMAND) -E touch_nocreate ../src_generated/types_nc_generated_handling.h

../src_generated/types_nc_generated_encoding_binary.h: ../src_generated/types_nc_generated.c
	@$(CMAKE_COMMAND) -E touch_nocreate ../src_generated/types_nc_generated_encoding_binary.h

../src_generated/nc_nodeids.h: /usr/local/share/open62541/tools/generate_nodeid_header.py
../src_generated/nc_nodeids.h: /usr/local/share/open62541/tools/ua-nodeset/CNC/Opc.Ua.CNC.NodeIds.csv
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/nb/eclipse-workspace/accesstsn_demoapps_opcuaserver/nc_machine/example/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Generating ../src_generated/nc_nodeids.h"
	/usr/bin/python /usr/local/share/open62541/tools/generate_nodeid_header.py /usr/local/share/open62541/tools/ua-nodeset/CNC/Opc.Ua.CNC.NodeIds.csv /home/nb/eclipse-workspace/accesstsn_demoapps_opcuaserver/nc_machine/example/src_generated/nc_nodeids NC

../src_generated/namespace_AccessTSNDemo_generated.c: /usr/local/share/open62541/tools/nodeset_compiler/nodeset_compiler.py
../src_generated/namespace_AccessTSNDemo_generated.c: /usr/local/share/open62541/tools/nodeset_compiler/nodes.py
../src_generated/namespace_AccessTSNDemo_generated.c: /usr/local/share/open62541/tools/nodeset_compiler/nodeset.py
../src_generated/namespace_AccessTSNDemo_generated.c: /usr/local/share/open62541/tools/nodeset_compiler/datatypes.py
../src_generated/namespace_AccessTSNDemo_generated.c: /usr/local/share/open62541/tools/nodeset_compiler/backend_open62541.py
../src_generated/namespace_AccessTSNDemo_generated.c: /usr/local/share/open62541/tools/nodeset_compiler/backend_open62541_nodes.py
../src_generated/namespace_AccessTSNDemo_generated.c: /usr/local/share/open62541/tools/nodeset_compiler/backend_open62541_datatypes.py
../src_generated/namespace_AccessTSNDemo_generated.c: ../models/accesstsn_demo.xml
../src_generated/namespace_AccessTSNDemo_generated.c: /usr/local/share/open62541/tools/ua-nodeset/Schema/Opc.Ua.NodeSet2.xml
../src_generated/namespace_AccessTSNDemo_generated.c: /usr/local/share/open62541/tools/ua-nodeset/CNC/Opc.Ua.CNC.NodeSet.xml
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/nb/eclipse-workspace/accesstsn_demoapps_opcuaserver/nc_machine/example/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Generating ../src_generated/namespace_AccessTSNDemo_generated.c, ../src_generated/namespace_AccessTSNDemo_generated.h"
	/usr/bin/python /usr/local/share/open62541/tools/nodeset_compiler/nodeset_compiler.py --types-array=UA_TYPES --types-array=UA_TYPES_NC --types-array=UA_TYPES_ACCESSTSNDEMO --existing=/usr/local/share/open62541/tools/ua-nodeset/Schema/Opc.Ua.NodeSet2.xml --existing=/usr/local/share/open62541/tools/ua-nodeset/CNC/Opc.Ua.CNC.NodeSet.xml --xml=/home/nb/eclipse-workspace/accesstsn_demoapps_opcuaserver/nc_machine/example/models/accesstsn_demo.xml /home/nb/eclipse-workspace/accesstsn_demoapps_opcuaserver/nc_machine/example/src_generated/namespace_AccessTSNDemo_generated

../src_generated/namespace_AccessTSNDemo_generated.h: ../src_generated/namespace_AccessTSNDemo_generated.c
	@$(CMAKE_COMMAND) -E touch_nocreate ../src_generated/namespace_AccessTSNDemo_generated.h

../src_generated/types_AccessTSNDemo_generated.c: /usr/local/share/open62541/tools/generate_datatypes.py
../src_generated/types_AccessTSNDemo_generated.c: ../models/accesstsn.bsd
../src_generated/types_AccessTSNDemo_generated.c: ../models/accesstsn_demo.csv
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/nb/eclipse-workspace/accesstsn_demoapps_opcuaserver/nc_machine/example/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Generating ../src_generated/types_AccessTSNDemo_generated.c, ../src_generated/types_AccessTSNDemo_generated.h, ../src_generated/types_AccessTSNDemo_generated_handling.h, ../src_generated/types_AccessTSNDemo_generated_encoding_binary.h"
	/usr/bin/python /usr/local/share/open62541/tools/generate_datatypes.py --namespaceMap=3:http://accesstsn.com/demo/ --namespaceMap=2:http://opcfoundation.org/UA/CNC --type-bsd=/home/nb/eclipse-workspace/accesstsn_demoapps_opcuaserver/nc_machine/example/models/accesstsn.bsd --type-csv=/home/nb/eclipse-workspace/accesstsn_demoapps_opcuaserver/nc_machine/example/models/accesstsn_demo.csv --no-builtin /home/nb/eclipse-workspace/accesstsn_demoapps_opcuaserver/nc_machine/example/src_generated/types_AccessTSNDemo

../src_generated/types_AccessTSNDemo_generated.h: ../src_generated/types_AccessTSNDemo_generated.c
	@$(CMAKE_COMMAND) -E touch_nocreate ../src_generated/types_AccessTSNDemo_generated.h

../src_generated/types_AccessTSNDemo_generated_handling.h: ../src_generated/types_AccessTSNDemo_generated.c
	@$(CMAKE_COMMAND) -E touch_nocreate ../src_generated/types_AccessTSNDemo_generated_handling.h

../src_generated/types_AccessTSNDemo_generated_encoding_binary.h: ../src_generated/types_AccessTSNDemo_generated.c
	@$(CMAKE_COMMAND) -E touch_nocreate ../src_generated/types_AccessTSNDemo_generated_encoding_binary.h

../src_generated/AccessTSNDemo_nodeids.h: /usr/local/share/open62541/tools/generate_nodeid_header.py
../src_generated/AccessTSNDemo_nodeids.h: ../models/accesstsn_demo.csv
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/nb/eclipse-workspace/accesstsn_demoapps_opcuaserver/nc_machine/example/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Generating ../src_generated/AccessTSNDemo_nodeids.h"
	/usr/bin/python /usr/local/share/open62541/tools/generate_nodeid_header.py /home/nb/eclipse-workspace/accesstsn_demoapps_opcuaserver/nc_machine/example/models/accesstsn_demo.csv /home/nb/eclipse-workspace/accesstsn_demoapps_opcuaserver/nc_machine/example/src_generated/AccessTSNDemo_nodeids ACCESSTSNDEMO

CMakeFiles/AccessTSNLib.dir/src_generated/namespace_nc_generated.c.o: CMakeFiles/AccessTSNLib.dir/flags.make
CMakeFiles/AccessTSNLib.dir/src_generated/namespace_nc_generated.c.o: ../src_generated/namespace_nc_generated.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nb/eclipse-workspace/accesstsn_demoapps_opcuaserver/nc_machine/example/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/AccessTSNLib.dir/src_generated/namespace_nc_generated.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/AccessTSNLib.dir/src_generated/namespace_nc_generated.c.o   -c /home/nb/eclipse-workspace/accesstsn_demoapps_opcuaserver/nc_machine/example/src_generated/namespace_nc_generated.c

CMakeFiles/AccessTSNLib.dir/src_generated/namespace_nc_generated.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/AccessTSNLib.dir/src_generated/namespace_nc_generated.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/nb/eclipse-workspace/accesstsn_demoapps_opcuaserver/nc_machine/example/src_generated/namespace_nc_generated.c > CMakeFiles/AccessTSNLib.dir/src_generated/namespace_nc_generated.c.i

CMakeFiles/AccessTSNLib.dir/src_generated/namespace_nc_generated.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/AccessTSNLib.dir/src_generated/namespace_nc_generated.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/nb/eclipse-workspace/accesstsn_demoapps_opcuaserver/nc_machine/example/src_generated/namespace_nc_generated.c -o CMakeFiles/AccessTSNLib.dir/src_generated/namespace_nc_generated.c.s

CMakeFiles/AccessTSNLib.dir/src_generated/types_nc_generated.c.o: CMakeFiles/AccessTSNLib.dir/flags.make
CMakeFiles/AccessTSNLib.dir/src_generated/types_nc_generated.c.o: ../src_generated/types_nc_generated.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nb/eclipse-workspace/accesstsn_demoapps_opcuaserver/nc_machine/example/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/AccessTSNLib.dir/src_generated/types_nc_generated.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/AccessTSNLib.dir/src_generated/types_nc_generated.c.o   -c /home/nb/eclipse-workspace/accesstsn_demoapps_opcuaserver/nc_machine/example/src_generated/types_nc_generated.c

CMakeFiles/AccessTSNLib.dir/src_generated/types_nc_generated.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/AccessTSNLib.dir/src_generated/types_nc_generated.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/nb/eclipse-workspace/accesstsn_demoapps_opcuaserver/nc_machine/example/src_generated/types_nc_generated.c > CMakeFiles/AccessTSNLib.dir/src_generated/types_nc_generated.c.i

CMakeFiles/AccessTSNLib.dir/src_generated/types_nc_generated.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/AccessTSNLib.dir/src_generated/types_nc_generated.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/nb/eclipse-workspace/accesstsn_demoapps_opcuaserver/nc_machine/example/src_generated/types_nc_generated.c -o CMakeFiles/AccessTSNLib.dir/src_generated/types_nc_generated.c.s

CMakeFiles/AccessTSNLib.dir/src_generated/namespace_AccessTSNDemo_generated.c.o: CMakeFiles/AccessTSNLib.dir/flags.make
CMakeFiles/AccessTSNLib.dir/src_generated/namespace_AccessTSNDemo_generated.c.o: ../src_generated/namespace_AccessTSNDemo_generated.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nb/eclipse-workspace/accesstsn_demoapps_opcuaserver/nc_machine/example/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/AccessTSNLib.dir/src_generated/namespace_AccessTSNDemo_generated.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/AccessTSNLib.dir/src_generated/namespace_AccessTSNDemo_generated.c.o   -c /home/nb/eclipse-workspace/accesstsn_demoapps_opcuaserver/nc_machine/example/src_generated/namespace_AccessTSNDemo_generated.c

CMakeFiles/AccessTSNLib.dir/src_generated/namespace_AccessTSNDemo_generated.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/AccessTSNLib.dir/src_generated/namespace_AccessTSNDemo_generated.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/nb/eclipse-workspace/accesstsn_demoapps_opcuaserver/nc_machine/example/src_generated/namespace_AccessTSNDemo_generated.c > CMakeFiles/AccessTSNLib.dir/src_generated/namespace_AccessTSNDemo_generated.c.i

CMakeFiles/AccessTSNLib.dir/src_generated/namespace_AccessTSNDemo_generated.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/AccessTSNLib.dir/src_generated/namespace_AccessTSNDemo_generated.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/nb/eclipse-workspace/accesstsn_demoapps_opcuaserver/nc_machine/example/src_generated/namespace_AccessTSNDemo_generated.c -o CMakeFiles/AccessTSNLib.dir/src_generated/namespace_AccessTSNDemo_generated.c.s

CMakeFiles/AccessTSNLib.dir/src_generated/types_AccessTSNDemo_generated.c.o: CMakeFiles/AccessTSNLib.dir/flags.make
CMakeFiles/AccessTSNLib.dir/src_generated/types_AccessTSNDemo_generated.c.o: ../src_generated/types_AccessTSNDemo_generated.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nb/eclipse-workspace/accesstsn_demoapps_opcuaserver/nc_machine/example/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building C object CMakeFiles/AccessTSNLib.dir/src_generated/types_AccessTSNDemo_generated.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/AccessTSNLib.dir/src_generated/types_AccessTSNDemo_generated.c.o   -c /home/nb/eclipse-workspace/accesstsn_demoapps_opcuaserver/nc_machine/example/src_generated/types_AccessTSNDemo_generated.c

CMakeFiles/AccessTSNLib.dir/src_generated/types_AccessTSNDemo_generated.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/AccessTSNLib.dir/src_generated/types_AccessTSNDemo_generated.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/nb/eclipse-workspace/accesstsn_demoapps_opcuaserver/nc_machine/example/src_generated/types_AccessTSNDemo_generated.c > CMakeFiles/AccessTSNLib.dir/src_generated/types_AccessTSNDemo_generated.c.i

CMakeFiles/AccessTSNLib.dir/src_generated/types_AccessTSNDemo_generated.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/AccessTSNLib.dir/src_generated/types_AccessTSNDemo_generated.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/nb/eclipse-workspace/accesstsn_demoapps_opcuaserver/nc_machine/example/src_generated/types_AccessTSNDemo_generated.c -o CMakeFiles/AccessTSNLib.dir/src_generated/types_AccessTSNDemo_generated.c.s

# Object files for target AccessTSNLib
AccessTSNLib_OBJECTS = \
"CMakeFiles/AccessTSNLib.dir/src_generated/namespace_nc_generated.c.o" \
"CMakeFiles/AccessTSNLib.dir/src_generated/types_nc_generated.c.o" \
"CMakeFiles/AccessTSNLib.dir/src_generated/namespace_AccessTSNDemo_generated.c.o" \
"CMakeFiles/AccessTSNLib.dir/src_generated/types_AccessTSNDemo_generated.c.o"

# External object files for target AccessTSNLib
AccessTSNLib_EXTERNAL_OBJECTS =

libAccessTSNLib.a: CMakeFiles/AccessTSNLib.dir/src_generated/namespace_nc_generated.c.o
libAccessTSNLib.a: CMakeFiles/AccessTSNLib.dir/src_generated/types_nc_generated.c.o
libAccessTSNLib.a: CMakeFiles/AccessTSNLib.dir/src_generated/namespace_AccessTSNDemo_generated.c.o
libAccessTSNLib.a: CMakeFiles/AccessTSNLib.dir/src_generated/types_AccessTSNDemo_generated.c.o
libAccessTSNLib.a: CMakeFiles/AccessTSNLib.dir/build.make
libAccessTSNLib.a: CMakeFiles/AccessTSNLib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/nb/eclipse-workspace/accesstsn_demoapps_opcuaserver/nc_machine/example/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Linking C static library libAccessTSNLib.a"
	$(CMAKE_COMMAND) -P CMakeFiles/AccessTSNLib.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/AccessTSNLib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/AccessTSNLib.dir/build: libAccessTSNLib.a

.PHONY : CMakeFiles/AccessTSNLib.dir/build

CMakeFiles/AccessTSNLib.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/AccessTSNLib.dir/cmake_clean.cmake
.PHONY : CMakeFiles/AccessTSNLib.dir/clean

CMakeFiles/AccessTSNLib.dir/depend: ../src_generated/namespace_nc_generated.c
CMakeFiles/AccessTSNLib.dir/depend: ../src_generated/namespace_nc_generated.h
CMakeFiles/AccessTSNLib.dir/depend: ../src_generated/types_nc_generated.c
CMakeFiles/AccessTSNLib.dir/depend: ../src_generated/types_nc_generated.h
CMakeFiles/AccessTSNLib.dir/depend: ../src_generated/types_nc_generated_handling.h
CMakeFiles/AccessTSNLib.dir/depend: ../src_generated/types_nc_generated_encoding_binary.h
CMakeFiles/AccessTSNLib.dir/depend: ../src_generated/nc_nodeids.h
CMakeFiles/AccessTSNLib.dir/depend: ../src_generated/namespace_AccessTSNDemo_generated.c
CMakeFiles/AccessTSNLib.dir/depend: ../src_generated/namespace_AccessTSNDemo_generated.h
CMakeFiles/AccessTSNLib.dir/depend: ../src_generated/types_AccessTSNDemo_generated.c
CMakeFiles/AccessTSNLib.dir/depend: ../src_generated/types_AccessTSNDemo_generated.h
CMakeFiles/AccessTSNLib.dir/depend: ../src_generated/types_AccessTSNDemo_generated_handling.h
CMakeFiles/AccessTSNLib.dir/depend: ../src_generated/types_AccessTSNDemo_generated_encoding_binary.h
CMakeFiles/AccessTSNLib.dir/depend: ../src_generated/AccessTSNDemo_nodeids.h
	cd /home/nb/eclipse-workspace/accesstsn_demoapps_opcuaserver/nc_machine/example/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/nb/eclipse-workspace/accesstsn_demoapps_opcuaserver/nc_machine/example /home/nb/eclipse-workspace/accesstsn_demoapps_opcuaserver/nc_machine/example /home/nb/eclipse-workspace/accesstsn_demoapps_opcuaserver/nc_machine/example/build /home/nb/eclipse-workspace/accesstsn_demoapps_opcuaserver/nc_machine/example/build /home/nb/eclipse-workspace/accesstsn_demoapps_opcuaserver/nc_machine/example/build/CMakeFiles/AccessTSNLib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/AccessTSNLib.dir/depend
