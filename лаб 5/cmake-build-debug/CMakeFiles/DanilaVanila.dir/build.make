# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/s/Desktop/Programming_2020/лаб 5"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/s/Desktop/Programming_2020/лаб 5/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/DanilaVanila.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/DanilaVanila.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/DanilaVanila.dir/flags.make

CMakeFiles/DanilaVanila.dir/main.cpp.o: CMakeFiles/DanilaVanila.dir/flags.make
CMakeFiles/DanilaVanila.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/s/Desktop/Programming_2020/лаб 5/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/DanilaVanila.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DanilaVanila.dir/main.cpp.o -c "/Users/s/Desktop/Programming_2020/лаб 5/main.cpp"

CMakeFiles/DanilaVanila.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DanilaVanila.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/s/Desktop/Programming_2020/лаб 5/main.cpp" > CMakeFiles/DanilaVanila.dir/main.cpp.i

CMakeFiles/DanilaVanila.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DanilaVanila.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/s/Desktop/Programming_2020/лаб 5/main.cpp" -o CMakeFiles/DanilaVanila.dir/main.cpp.s

# Object files for target DanilaVanila
DanilaVanila_OBJECTS = \
"CMakeFiles/DanilaVanila.dir/main.cpp.o"

# External object files for target DanilaVanila
DanilaVanila_EXTERNAL_OBJECTS =

DanilaVanila: CMakeFiles/DanilaVanila.dir/main.cpp.o
DanilaVanila: CMakeFiles/DanilaVanila.dir/build.make
DanilaVanila: CMakeFiles/DanilaVanila.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/s/Desktop/Programming_2020/лаб 5/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable DanilaVanila"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/DanilaVanila.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/DanilaVanila.dir/build: DanilaVanila

.PHONY : CMakeFiles/DanilaVanila.dir/build

CMakeFiles/DanilaVanila.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/DanilaVanila.dir/cmake_clean.cmake
.PHONY : CMakeFiles/DanilaVanila.dir/clean

CMakeFiles/DanilaVanila.dir/depend:
	cd "/Users/s/Desktop/Programming_2020/лаб 5/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/s/Desktop/Programming_2020/лаб 5" "/Users/s/Desktop/Programming_2020/лаб 5" "/Users/s/Desktop/Programming_2020/лаб 5/cmake-build-debug" "/Users/s/Desktop/Programming_2020/лаб 5/cmake-build-debug" "/Users/s/Desktop/Programming_2020/лаб 5/cmake-build-debug/CMakeFiles/DanilaVanila.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/DanilaVanila.dir/depend

