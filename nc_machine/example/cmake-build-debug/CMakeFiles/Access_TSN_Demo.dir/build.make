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

# Include any dependencies generated for this target.
include CMakeFiles/Access_TSN_Demo.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Access_TSN_Demo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Access_TSN_Demo.dir/flags.make

CMakeFiles/Access_TSN_Demo.dir/main.c.obj: CMakeFiles/Access_TSN_Demo.dir/flags.make
CMakeFiles/Access_TSN_Demo.dir/main.c.obj: CMakeFiles/Access_TSN_Demo.dir/includes_C.rsp
CMakeFiles/Access_TSN_Demo.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\codelab\NC_Maschine\example\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Access_TSN_Demo.dir/main.c.obj"
	C:\PROGRA~2\MINGW-~1\I686-7~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Access_TSN_Demo.dir\main.c.obj   -c D:\codelab\NC_Maschine\example\main.c

CMakeFiles/Access_TSN_Demo.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Access_TSN_Demo.dir/main.c.i"
	C:\PROGRA~2\MINGW-~1\I686-7~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\codelab\NC_Maschine\example\main.c > CMakeFiles\Access_TSN_Demo.dir\main.c.i

CMakeFiles/Access_TSN_Demo.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Access_TSN_Demo.dir/main.c.s"
	C:\PROGRA~2\MINGW-~1\I686-7~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\codelab\NC_Maschine\example\main.c -o CMakeFiles\Access_TSN_Demo.dir\main.c.s

CMakeFiles/Access_TSN_Demo.dir/main.c.obj.requires:

.PHONY : CMakeFiles/Access_TSN_Demo.dir/main.c.obj.requires

CMakeFiles/Access_TSN_Demo.dir/main.c.obj.provides: CMakeFiles/Access_TSN_Demo.dir/main.c.obj.requires
	$(MAKE) -f CMakeFiles\Access_TSN_Demo.dir\build.make CMakeFiles/Access_TSN_Demo.dir/main.c.obj.provides.build
.PHONY : CMakeFiles/Access_TSN_Demo.dir/main.c.obj.provides

CMakeFiles/Access_TSN_Demo.dir/main.c.obj.provides.build: CMakeFiles/Access_TSN_Demo.dir/main.c.obj


# Object files for target Access_TSN_Demo
Access_TSN_Demo_OBJECTS = \
"CMakeFiles/Access_TSN_Demo.dir/main.c.obj"

# External object files for target Access_TSN_Demo
Access_TSN_Demo_EXTERNAL_OBJECTS =

Access_TSN_Demod.exe: CMakeFiles/Access_TSN_Demo.dir/main.c.obj
Access_TSN_Demod.exe: CMakeFiles/Access_TSN_Demo.dir/build.make
Access_TSN_Demod.exe: libAccessTSNLibd.a
Access_TSN_Demod.exe: D:/codelab/glas_opcua_server/install-debug/lib/libopen62541.a
Access_TSN_Demod.exe: D:/codelab/glas_opcua_server/install-debug/lib/libmbedtls.a
Access_TSN_Demod.exe: D:/codelab/glas_opcua_server/install-debug/lib/libmbedx509.a
Access_TSN_Demod.exe: D:/codelab/glas_opcua_server/install-debug/lib/libmbedcrypto.a
Access_TSN_Demod.exe: CMakeFiles/Access_TSN_Demo.dir/linklibs.rsp
Access_TSN_Demod.exe: CMakeFiles/Access_TSN_Demo.dir/objects1.rsp
Access_TSN_Demod.exe: CMakeFiles/Access_TSN_Demo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\codelab\NC_Maschine\example\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Access_TSN_Demod.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Access_TSN_Demo.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Access_TSN_Demo.dir/build: Access_TSN_Demod.exe

.PHONY : CMakeFiles/Access_TSN_Demo.dir/build

CMakeFiles/Access_TSN_Demo.dir/requires: CMakeFiles/Access_TSN_Demo.dir/main.c.obj.requires

.PHONY : CMakeFiles/Access_TSN_Demo.dir/requires

CMakeFiles/Access_TSN_Demo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Access_TSN_Demo.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Access_TSN_Demo.dir/clean

CMakeFiles/Access_TSN_Demo.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\codelab\NC_Maschine\example D:\codelab\NC_Maschine\example D:\codelab\NC_Maschine\example\cmake-build-debug D:\codelab\NC_Maschine\example\cmake-build-debug D:\codelab\NC_Maschine\example\cmake-build-debug\CMakeFiles\Access_TSN_Demo.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Access_TSN_Demo.dir/depend
