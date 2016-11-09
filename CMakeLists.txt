cmake_minimum_required(VERSION 3.0.0)
project(HasteClient VERSION 0.0.0)

set(CMAKE_COLOR_MAKEFILE ON)
set(BUILD_SHARED_LIBS OFF)

# Default to release build type
if(NOT CMAKE_BUILD_TYPE)
	set(CMAKE_BUILD_TYPE "Release")
endif()

# unit test
include(CTest)
enable_testing()

add_subdirectory(src)

set(CPACK_FILE "CMakeCPack.cmake")
include(${CPACK_FILE})

