cmake_minimum_required(VERSION 3.26)
project(project)

set(CMAKE_CXX_STANDARD 14)

include_directories(code)

add_executable(project
        code/parsedatatovectors.cpp
        code/parsedatatovectors.h
        code/classes.cpp
        code/students.h
        code/students.cpp
        code/possible_operations.h
<<<<<<< HEAD
        code/possible_operations.cpp)

=======
        code/possible_operations.cpp
        code/Menu.h
        code/Menu.cpp
        code/Menu.cpp
)
>>>>>>> main
