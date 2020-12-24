cmake_minimum_required(VERSION 3.19.20)

project(speaker VERSION 1.0)

find_package(GTest CONFIG REQUIRED)

include_directories("inc")

add_executable(${PROJECT_NAME} src/main.cc)
