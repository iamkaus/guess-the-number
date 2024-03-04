cmake_minimum_required(VERSION 3.1...3.28)

project(
    GuessTheNumber
    VERSION 1.0
    LANGUAGES CXX)

set (CMAKE_CXX_FLAGS "-g3 -Wall -O3")

FILE(GLOB SRC src/*.cpp)
add_executable(GuessTheNumber ${SRC}) 