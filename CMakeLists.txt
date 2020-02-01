cmake_minimum_required(VERSION 3.10.2)

project(test C CXX)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

set(CMAKE_CXX_FLAGS "-flto")

set( MAIN_SRC_DIR  ${CMAKE_CURRENT_SOURCE_DIR}/src )

set(CMAKE_VERBOSE_MAKEFILE true)
set (CMAKE_CXX_STANDARD 17)
add_definitions(-std=c++17 )

if(UNIX)
	add_definitions(" -pedantic -pedantic-errors -W ")
	add_definitions(" -Wall -Wextra  -Werror -Wshadow -Wnon-virtual-dtor -Wunused ")
	add_definitions(" -v ")
    add_definitions(" -g  ")
endif(UNIX)


add_subdirectory(src/shared)
add_subdirectory(src/exe)
add_subdirectory(src/wasm)


get_property(dirs DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY INCLUDE_DIRECTORIES)
foreach(dir ${dirs})
  message(STATUS "dir='${dir}'")
endforeach()
