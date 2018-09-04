cmake_minimum_required (VERSION 2.6)

project (InfineTestCPP)
find_package (Threads)

add_executable(InfineTestCPP InfineTestCPP.cpp)

target_link_libraries (InfineTestCPP ${CMAKE_THREAD_LIBS_INIT})
