cmake_minimum_required(VERSION 3.5.1)

project(sales VERSION 1.0)

include_directories("inc")

add_executable(${PROJECT_NAME} src/sales.cc)

# from inside the build directory: cmake ..
# from the root directory, cmake --build build