cmake_minimum_required(VERSION 3.22.1)

project(crobots)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)
set(ROBOTS_INSTALL OFF)

add_subdirectory(external/robotstxt)

add_library(${PROJECT_NAME} STATIC crobots.cc)

target_include_directories(${PROJECT_NAME} PUBLIC external/robotstxt)
target_link_libraries(${PROJECT_NAME} PRIVATE robots-static)
