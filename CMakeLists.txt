cmake_minimum_required(VERSION 3.10)

project(lexer LANGUAGES C)

set(CMAKE_C_FLAGS "-g -Wall -std=c11")

set(HEADERS
    include/processing.h
)

set(SOURCES
    src/main.c
    src/processing.c
)

add_executable(lexer.out ${HEADERS} ${SOURCES})
