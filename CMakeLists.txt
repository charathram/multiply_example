cmake_minimum_required(VERSION 3.13)

project(multiply_example)
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
add_subdirectory(src)
add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/extern/MathLib)
