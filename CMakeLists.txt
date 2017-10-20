cmake_minimum_required(VERSION 3.8)
project(CrackingTheCodingInterview)

set(CMAKE_CXX_STANDARD 11)

add_library(Catch INTERFACE)
target_include_directories(Catch INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
target_sources(Catch INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/catch.hpp)

add_subdirectory(arrays_and_strings)