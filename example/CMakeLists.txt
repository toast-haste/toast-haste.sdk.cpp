project(${SAMPLE_MODULE_NAME})

add_executable(${SAMPLE_MODULE_NAME} main.cpp)

target_link_libraries(${SAMPLE_MODULE_NAME} ${MODULE_NAME})
