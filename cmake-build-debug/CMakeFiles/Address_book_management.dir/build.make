# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\MyWork\CLion 2020.3.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\MyWork\CLion 2020.3.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "E:\ClionProject\Address book management"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "E:\ClionProject\Address book management\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Address_book_management.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Address_book_management.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Address_book_management.dir/flags.make

CMakeFiles/Address_book_management.dir/main.cpp.obj: CMakeFiles/Address_book_management.dir/flags.make
CMakeFiles/Address_book_management.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="E:\ClionProject\Address book management\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Address_book_management.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Address_book_management.dir\main.cpp.obj -c "E:\ClionProject\Address book management\main.cpp"

CMakeFiles/Address_book_management.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Address_book_management.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "E:\ClionProject\Address book management\main.cpp" > CMakeFiles\Address_book_management.dir\main.cpp.i

CMakeFiles/Address_book_management.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Address_book_management.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "E:\ClionProject\Address book management\main.cpp" -o CMakeFiles\Address_book_management.dir\main.cpp.s

# Object files for target Address_book_management
Address_book_management_OBJECTS = \
"CMakeFiles/Address_book_management.dir/main.cpp.obj"

# External object files for target Address_book_management
Address_book_management_EXTERNAL_OBJECTS =

Address_book_management.exe: CMakeFiles/Address_book_management.dir/main.cpp.obj
Address_book_management.exe: CMakeFiles/Address_book_management.dir/build.make
Address_book_management.exe: CMakeFiles/Address_book_management.dir/linklibs.rsp
Address_book_management.exe: CMakeFiles/Address_book_management.dir/objects1.rsp
Address_book_management.exe: CMakeFiles/Address_book_management.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="E:\ClionProject\Address book management\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Address_book_management.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Address_book_management.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Address_book_management.dir/build: Address_book_management.exe

.PHONY : CMakeFiles/Address_book_management.dir/build

CMakeFiles/Address_book_management.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Address_book_management.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Address_book_management.dir/clean

CMakeFiles/Address_book_management.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "E:\ClionProject\Address book management" "E:\ClionProject\Address book management" "E:\ClionProject\Address book management\cmake-build-debug" "E:\ClionProject\Address book management\cmake-build-debug" "E:\ClionProject\Address book management\cmake-build-debug\CMakeFiles\Address_book_management.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Address_book_management.dir/depend

