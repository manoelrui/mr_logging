cmake_minimum_required(VERSION 3.10)

set(PROJECT_NAME mr_logging)
set(HEADERS include/base_log.h)
set(SOURCES src/base_log.cpp)

project(${PROJECT_NAME})

include_directories(include)

add_library(${PROJECT_NAME} STATIC ${HEADERS} ${SOURCES})

add_subdirectory(test)
