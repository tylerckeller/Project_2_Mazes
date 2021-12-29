cmake_minimum_required(VERSION 3.20)
project(Tyler_Keller_Project_2_Mazes)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Tyler_Keller_Project_2_Mazes
        main.cpp
        maze_solver.cpp
        maze_solver.h
        point.cpp
        point.h)
