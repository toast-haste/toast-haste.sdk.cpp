
set(HASTE_INCLUDE_DIR "${CMAKE_SOURCE_DIR}/include")

file(GLOB HASTE_HEADERS "${HASTE_INCLUDE_DIR}/*.h")
file(GLOB HASTE_SRCS "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")

include_directories(${HASTE_INCLUDE_DIR})

set(SRCS
    ${HASTE_HEADERS}
    ${HASTE_SRCS}
)

add_library(HasteClient ${SRCS})