cmake_minimum_required(VERSION 3.1)
set (CMAKE_CXX_STANDARD 17)

project(wektor_test)

# Useful CMake options for Qt projects
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)

# Search desired Qt packages
find_package(Qt5Core REQUIRED)

# Create a list with all .cpp source files
set( project_sources
    main.cpp
    wektor.cpp
    vektor.cpp
)
# Create a list with all .h headers files
set( project_headers
    vector.h
)
