# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.3.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.3.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Patrick\CS361_Final\Nodes

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Patrick\CS361_Final\Nodes\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Nodes.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Nodes.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Nodes.dir/flags.make

CMakeFiles/Nodes.dir/main.cpp.obj: CMakeFiles/Nodes.dir/flags.make
CMakeFiles/Nodes.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Patrick\CS361_Final\Nodes\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Nodes.dir/main.cpp.obj"
	C:\TDM-GCC-64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Nodes.dir\main.cpp.obj -c C:\Users\Patrick\CS361_Final\Nodes\main.cpp

CMakeFiles/Nodes.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Nodes.dir/main.cpp.i"
	C:\TDM-GCC-64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Patrick\CS361_Final\Nodes\main.cpp > CMakeFiles\Nodes.dir\main.cpp.i

CMakeFiles/Nodes.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Nodes.dir/main.cpp.s"
	C:\TDM-GCC-64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Patrick\CS361_Final\Nodes\main.cpp -o CMakeFiles\Nodes.dir\main.cpp.s

# Object files for target Nodes
Nodes_OBJECTS = \
"CMakeFiles/Nodes.dir/main.cpp.obj"

# External object files for target Nodes
Nodes_EXTERNAL_OBJECTS =

Nodes.exe: CMakeFiles/Nodes.dir/main.cpp.obj
Nodes.exe: CMakeFiles/Nodes.dir/build.make
Nodes.exe: CMakeFiles/Nodes.dir/linklibs.rsp
Nodes.exe: CMakeFiles/Nodes.dir/objects1.rsp
Nodes.exe: CMakeFiles/Nodes.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Patrick\CS361_Final\Nodes\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Nodes.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Nodes.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Nodes.dir/build: Nodes.exe

.PHONY : CMakeFiles/Nodes.dir/build

CMakeFiles/Nodes.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Nodes.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Nodes.dir/clean

CMakeFiles/Nodes.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Patrick\CS361_Final\Nodes C:\Users\Patrick\CS361_Final\Nodes C:\Users\Patrick\CS361_Final\Nodes\cmake-build-debug C:\Users\Patrick\CS361_Final\Nodes\cmake-build-debug C:\Users\Patrick\CS361_Final\Nodes\cmake-build-debug\CMakeFiles\Nodes.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Nodes.dir/depend

