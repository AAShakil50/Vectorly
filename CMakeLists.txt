cmake_minimum_required(VERSION 3.22.1)
project(Vectorly)

add_executable(${CMAKE_PROJECT_NAME} sources/main.cpp)

add_subdirectory(sources)
target_link_libraries(${CMAKE_PROJECT_NAME} PRIVATE Main)