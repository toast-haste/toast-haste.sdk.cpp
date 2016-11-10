cmake_minimum_required(VERSION 3.0.0)
project(HasteClient VERSION 0.0.0)

set(CMAKE_COLOR_MAKEFILE ON)
set(BUILD_SHARED_LIBS OFF)

# Default to release build type
if(NOT CMAKE_BUILD_TYPE)
	set(CMAKE_BUILD_TYPE "Release")
endif()

set(HASTE_INCLUDE_DIR "${CMAKE_SOURCE_DIR}/include")

include_directories(${HASTE_INCLUDE_DIR})

set(SAMPLE_MODULE_NAME "HasteClientSample")
set(MODULE_NAME "HasteClient")

add_subdirectory(hasteclient)
add_subdirectory(example)

# unit test
include(CTest)
enable_testing()

set(CPACK_FILE "CMakeCPack.cmake")
include(${CPACK_FILE})

