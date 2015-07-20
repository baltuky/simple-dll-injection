cmake_minimum_required(VERSION 2.8.4)
project(message-box-dll)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES message-box.cpp)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_HOME_DIRECTORY}/bin)
add_library(messagebox SHARED ${SOURCE_FILES})