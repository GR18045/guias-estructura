cmake_minimum_required(VERSION 3.14)
project(ejercicio03 C)

set(CMAKE_C_STANDARD 99)

add_executable(ejercicio03 main.c)
target_link_libraries(ejercicio03 m)