cmake_minimum_required(VERSION 3.15)
project(datastructures C CXX)

# set tag for all source files
set(SOURCE_FILES
    dynamicarray.h
    dynamicarray.cpp
)

# create statuc library from source files
add_library(datastructures SHARED STATIC ${SOURCE_FILES})

# install it to to the lib, add headers to include
install(TARGETS datastructures DESTINATION ${DS_INSTALL_LIB_DIR})
install(FILES dynamicarray.h DESTINATION ${DS_INSTALL_INCLUDE_DIR})