cmake_minimum_required(VERSION 3.14)

set(EXENAME cpp)
project(${EXENAME} CXX)

set(CMAKE_CXX_STANDARD 17)
SET(CMAKE_C_COMPILER "gcc")
SET(CMAKE_C_FLAGS_DEBUG "-g")

include_directories(/usr/include/python3.10 ${PROJECT_SOURCE_DIR}/../pyx/release)
link_directories( /usr/lib/python3.10 ${PROJECT_SOURCE_DIR}/../pyx/release)

add_executable(${EXENAME} call_so.cpp)
target_link_libraries(${EXENAME} myso python3.10)
