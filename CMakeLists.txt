cmake_minimum_required(VERSION 3.16)
project(ds_and_algos)

set(CMAKE_CXX_STANDARD 20)

add_executable(
        ds_and_algos
        src/main.cpp
        src/algorithms/InsertionSort.cpp include/InsertionSort.h
        src/algorithms/QuickSort.cpp include/QuickSort.h

        )