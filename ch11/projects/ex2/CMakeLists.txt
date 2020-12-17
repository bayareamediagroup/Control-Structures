cmake_minimum_required(VERSION 3.5.1)

project(profit)

include_directories("inc")

add_executable(${PROJECT_NAME} src/profit.cc)

# from inside the build directory: cmake ..
# from the root directory, cmake --build build