cmake_minimum_required (VERSION 3.15)
project(data_struct_course)
set(DCMAKE_SH="CMAKE_SH-NOTFOUND")
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -O3")

set(CMAKE_INSTALL_PREFIX ${PROJECT_SOURCE_DIR})

set(DS_INSTALL_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include)
set(DS_INSTALL_BIN_DIR ${PROJECT_SOURCE_DIR}/bin)
set(DS_INSTALL_LIB_DIR ${PROJECT_SOURCE_DIR}/lib)

set(DS_HEADERS_DIR ${PROJECT_SOURCE_DIR}/src/datastructures)

include_directories(${DS_INSTALL_INCLUDE_DIR})
include_directories(${DS_HEADERS_DIR})

add_subdirectory(src)
#add_subdirectory(test)