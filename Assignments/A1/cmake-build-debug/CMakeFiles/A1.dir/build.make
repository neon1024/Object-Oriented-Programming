# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.24

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2022.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2022.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\rober\Desktop\Coding Spaces\UBB Coding Space\Object-Oriented-Programming\Assignments\A1"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\rober\Desktop\Coding Spaces\UBB Coding Space\Object-Oriented-Programming\Assignments\A1\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/A1.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/A1.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/A1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/A1.dir/flags.make

CMakeFiles/A1.dir/a1-neon1024-1/main.c.obj: CMakeFiles/A1.dir/flags.make
CMakeFiles/A1.dir/a1-neon1024-1/main.c.obj: C:/Users/rober/Desktop/Coding\ Spaces/UBB\ Coding\ Space/Object-Oriented-Programming/Assignments/A1/a1-neon1024-1/main.c
CMakeFiles/A1.dir/a1-neon1024-1/main.c.obj: CMakeFiles/A1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\rober\Desktop\Coding Spaces\UBB Coding Space\Object-Oriented-Programming\Assignments\A1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/A1.dir/a1-neon1024-1/main.c.obj"
	C:\msys64\mingw64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/A1.dir/a1-neon1024-1/main.c.obj -MF CMakeFiles\A1.dir\a1-neon1024-1\main.c.obj.d -o CMakeFiles\A1.dir\a1-neon1024-1\main.c.obj -c "C:\Users\rober\Desktop\Coding Spaces\UBB Coding Space\Object-Oriented-Programming\Assignments\A1\a1-neon1024-1\main.c"

CMakeFiles/A1.dir/a1-neon1024-1/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/A1.dir/a1-neon1024-1/main.c.i"
	C:\msys64\mingw64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\rober\Desktop\Coding Spaces\UBB Coding Space\Object-Oriented-Programming\Assignments\A1\a1-neon1024-1\main.c" > CMakeFiles\A1.dir\a1-neon1024-1\main.c.i

CMakeFiles/A1.dir/a1-neon1024-1/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/A1.dir/a1-neon1024-1/main.c.s"
	C:\msys64\mingw64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\rober\Desktop\Coding Spaces\UBB Coding Space\Object-Oriented-Programming\Assignments\A1\a1-neon1024-1\main.c" -o CMakeFiles\A1.dir\a1-neon1024-1\main.c.s

# Object files for target A1
A1_OBJECTS = \
"CMakeFiles/A1.dir/a1-neon1024-1/main.c.obj"

# External object files for target A1
A1_EXTERNAL_OBJECTS =

A1.exe: CMakeFiles/A1.dir/a1-neon1024-1/main.c.obj
A1.exe: CMakeFiles/A1.dir/build.make
A1.exe: CMakeFiles/A1.dir/linklibs.rsp
A1.exe: CMakeFiles/A1.dir/objects1.rsp
A1.exe: CMakeFiles/A1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\rober\Desktop\Coding Spaces\UBB Coding Space\Object-Oriented-Programming\Assignments\A1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable A1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\A1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/A1.dir/build: A1.exe
.PHONY : CMakeFiles/A1.dir/build

CMakeFiles/A1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\A1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/A1.dir/clean

CMakeFiles/A1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\rober\Desktop\Coding Spaces\UBB Coding Space\Object-Oriented-Programming\Assignments\A1" "C:\Users\rober\Desktop\Coding Spaces\UBB Coding Space\Object-Oriented-Programming\Assignments\A1" "C:\Users\rober\Desktop\Coding Spaces\UBB Coding Space\Object-Oriented-Programming\Assignments\A1\cmake-build-debug" "C:\Users\rober\Desktop\Coding Spaces\UBB Coding Space\Object-Oriented-Programming\Assignments\A1\cmake-build-debug" "C:\Users\rober\Desktop\Coding Spaces\UBB Coding Space\Object-Oriented-Programming\Assignments\A1\cmake-build-debug\CMakeFiles\A1.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/A1.dir/depend

