# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.7

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2017.1.2\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2017.1.2\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Ananya\Documents\GitHub\AnanyasLab\PlayFair

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Ananya\Documents\GitHub\AnanyasLab\PlayFair\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/PlayFair.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/PlayFair.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/PlayFair.dir/flags.make

CMakeFiles/PlayFair.dir/main.cpp.obj: CMakeFiles/PlayFair.dir/flags.make
CMakeFiles/PlayFair.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Ananya\Documents\GitHub\AnanyasLab\PlayFair\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/PlayFair.dir/main.cpp.obj"
	C:\PROGRA~2\Dev-Cpp\MinGW64\bin\G__~1.EXE   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\PlayFair.dir\main.cpp.obj -c C:\Users\Ananya\Documents\GitHub\AnanyasLab\PlayFair\main.cpp

CMakeFiles/PlayFair.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PlayFair.dir/main.cpp.i"
	C:\PROGRA~2\Dev-Cpp\MinGW64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Ananya\Documents\GitHub\AnanyasLab\PlayFair\main.cpp > CMakeFiles\PlayFair.dir\main.cpp.i

CMakeFiles/PlayFair.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PlayFair.dir/main.cpp.s"
	C:\PROGRA~2\Dev-Cpp\MinGW64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Ananya\Documents\GitHub\AnanyasLab\PlayFair\main.cpp -o CMakeFiles\PlayFair.dir\main.cpp.s

CMakeFiles/PlayFair.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/PlayFair.dir/main.cpp.obj.requires

CMakeFiles/PlayFair.dir/main.cpp.obj.provides: CMakeFiles/PlayFair.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\PlayFair.dir\build.make CMakeFiles/PlayFair.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/PlayFair.dir/main.cpp.obj.provides

CMakeFiles/PlayFair.dir/main.cpp.obj.provides.build: CMakeFiles/PlayFair.dir/main.cpp.obj


# Object files for target PlayFair
PlayFair_OBJECTS = \
"CMakeFiles/PlayFair.dir/main.cpp.obj"

# External object files for target PlayFair
PlayFair_EXTERNAL_OBJECTS =

PlayFair.exe: CMakeFiles/PlayFair.dir/main.cpp.obj
PlayFair.exe: CMakeFiles/PlayFair.dir/build.make
PlayFair.exe: CMakeFiles/PlayFair.dir/linklibs.rsp
PlayFair.exe: CMakeFiles/PlayFair.dir/objects1.rsp
PlayFair.exe: CMakeFiles/PlayFair.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Ananya\Documents\GitHub\AnanyasLab\PlayFair\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable PlayFair.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\PlayFair.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/PlayFair.dir/build: PlayFair.exe

.PHONY : CMakeFiles/PlayFair.dir/build

CMakeFiles/PlayFair.dir/requires: CMakeFiles/PlayFair.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/PlayFair.dir/requires

CMakeFiles/PlayFair.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\PlayFair.dir\cmake_clean.cmake
.PHONY : CMakeFiles/PlayFair.dir/clean

CMakeFiles/PlayFair.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Ananya\Documents\GitHub\AnanyasLab\PlayFair C:\Users\Ananya\Documents\GitHub\AnanyasLab\PlayFair C:\Users\Ananya\Documents\GitHub\AnanyasLab\PlayFair\cmake-build-debug C:\Users\Ananya\Documents\GitHub\AnanyasLab\PlayFair\cmake-build-debug C:\Users\Ananya\Documents\GitHub\AnanyasLab\PlayFair\cmake-build-debug\CMakeFiles\PlayFair.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/PlayFair.dir/depend

