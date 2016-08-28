project(Cube_test)

cmake_minimum_required(VERSION 2.8)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -lSDL2 -lGLEW -lSDL2_image -lGL")
set(SOURCES_LIST main.cpp shader_utils.h shader_utils.cpp)

add_executable(${PROJECT_NAME} ${SOURCES_LIST})
