cmake_minimum_required(VERSION 3.3)
project(hw5KeyboardPredict)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES tp_main.cpp TextPredictor.cpp TextPredictor.h)
add_executable(hw5KeyboardPredict ${SOURCE_FILES})