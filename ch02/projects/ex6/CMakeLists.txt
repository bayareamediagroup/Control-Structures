cmake_minimum_required(VERSION 3.19.20)
project(annual VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED YES)
set(CMAKE_CXX_EXTENSIONS NO)

set(CMAKE_BUILD_TYPE Release)

enable_testing()

add_subdirectory(src)
add_subdirectory(test)
add_subdirectory(lib/googletest)
add_subdirectory(main)

# bring in headers
include_directories("/usr/local/include/gtest")
include_directories("inc")

#set(SOURCES src/main.cpp src/assignment.cpp)
set(SOURCES src/*.cpp)
#file(GLOB SOURCES "src/*.cpp")

#include(GoogleTest)
#
#find_package(GTest CONFIG REQUIRED)

##add_library(lgtest STATIC -)
#
##target_link_libraries(${PROJECT_NAME} -lgtest -pthread)
#
#add_executable(AllocTest src/main_test.cpp)
#
#gtest_add_tests(TARGET AllocTest TEST_SUFFIX .noArgs TEST_LIST noArgsTests)


#set_tests_properties(${noArgsTests} PROPERTIES TIMEOUT 10)

add_executable(${PROJECT_NAME} ${SOURCES})
# uncomment and comment the above line to create a shared library
#add_library(Allocator SHARED ${SOURCES})
#install(TARGETS Allocator CONFIGURATIONS Debug PERMISSIONS OWNER_WRITE DESTINATION /src/lib)
