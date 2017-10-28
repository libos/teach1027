cmake_minimum_required(VERSION 3.8)
project(Teach1027Sort)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp BubbleSort.h SelectionSort.h InsertionSort.h MergeSort.h QuickSort.h TestTools.h QuickSort3Way.h)
add_executable(Teach1027Sort ${SOURCE_FILES})