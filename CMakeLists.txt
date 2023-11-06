cmake_minimum_required(VERSION 3.26)

project(learn_opengl)

set(CMAKE_CXX_STANDARD 23)

add_executable(${PROJECT_NAME} main.cc)

include_directories(include)

add_subdirectory(source)
add_subdirectory(test)
