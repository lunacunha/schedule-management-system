cmake_minimum_required(VERSION 3.26)
project(project)

set(CMAKE_CXX_STANDARD 14)

include_directories(code)

add_executable(project
        code/parsedatatovectors.cpp
        code/parsedatatovectors.h
        code/classes.cpp
        code/students.cpp
        code/marta.cpp
        code/possible_operations.h
        code/possible_operations.cpp)
