cmake_minimum_required(VERSION 3.19.20)

project(weather VERSION 1.0)

include_directories("inc")

add_executable(${PROJECT_NAME} src/main.cc)
