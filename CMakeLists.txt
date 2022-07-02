cmake_minimum_required(VERSION 3.18.0)

project(matrix CXX)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${PROJECT_SOURCE_DIR})

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O3 -Wreturn-type -Wempty-body -Wno-deprecated")

#ADD_DEFINITIONS(-DNDEBUG)

include_directories(include)
file(GLOB SOURCES "src/*.cpp")
add_library(matrix SHARED ${SOURCES})
target_link_libraries(matrix)

enable_testing()
add_subdirectory(unittest)
