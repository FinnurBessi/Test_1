cmake_minimum_required(VERSION 2.8)
project(GTestDemo)

#set (CMAKE_CXX_FLAGS "--std=gnu++11")
set (CMAKE_CXX_STANDARD 11)

add_subdirectory(googletest)
enable_testing()

#include_directories(GTestDemo/Temp/Includes)
#include_directories(c:/BrAutomation/AS43/AS/gnuinst/V4.1.2/i386-elf/include)

add_subdirectory(GTestDemo/Logical/MyLibTest)
