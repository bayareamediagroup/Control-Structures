cmake_minimum_required(VERSION 3.19.20)

project(circle VERSION 1.0)

set(CMAKE_BUILD_TYPE Release)

include_directories("/usr/local/include/gtest")
include_directories("inc")

file(GLOB SOURCES "src/*.cpp")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED YES)
set(CMAKE_CXX_EXTENSIONS NO)

add_executable(${PROJECT_NAME} ${SOURCES})
