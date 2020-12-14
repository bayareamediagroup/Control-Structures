cmake_minimum_required(VERSION 3.5.1)

project(movie)

include_directories("inc")

add_executable(${PROJECT_NAME} src/main.cc)

# from inside the build directory: cmake ..
# from the root directory, cmake --build build