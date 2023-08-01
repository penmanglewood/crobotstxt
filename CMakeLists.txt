cmake_minimum_required(VERSION 3.12)

project(crobots)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)
set(ROBOTS_INSTALL OFF)
set(ABSL_PROPAGATE_CXX_STD ON)

add_subdirectory(external/robotstxt)

add_library(${PROJECT_NAME} crobots.cc)

target_include_directories(${PROJECT_NAME} PRIVATE external/robotstxt)
target_link_libraries(${PROJECT_NAME} PRIVATE robots)
