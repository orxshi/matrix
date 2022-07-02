cmake_minimum_required(VERSION 3.18.0)

project(unittest CXX)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${PROJECT_SOURCE_DIR})

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O3 -Wreturn-type -Wempty-body -Wno-deprecated")

#ADD_DEFINITIONS(-DNDEBUG)

include_directories(../include)
link_directories(../build)

add_executable(cross_product cross_product.cpp)
add_executable(dot_product dot_product.cpp)

add_test(NAME cross_product COMMAND cross_product)
add_test(NAME dot_product COMMAND dot_product)
