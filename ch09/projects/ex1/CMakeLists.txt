cmake_minimum_required(VERSION 3.19.20)

project(allocator VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED YES)
set(CMAKE_CXX_EXTENSIONS NO)

find_package(GTest CONFIG REQUIRED)

include_directories("inc")

add_executable(${PROJECT_NAME} src/main.cpp)
