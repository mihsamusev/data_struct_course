cmake_minimum_required(VERSION 3.15)
project(main)

add_subdirectory(datastructures)

# set tag for all source files
set(SOURCE_FILES main.cpp)

# create executable from source files
add_executable(dsshow ${SOURCE_FILES})

# link against vertex library
target_link_libraries(dsshow datastructures)

# install the executble to the bin folder
install(TARGETS datastructures DESTINATION ${DS_INSTALL_BIN_DIR})