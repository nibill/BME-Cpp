cmake_minimum_required(VERSION 2.8)

project(01fibonacci)

set(SOURCES
    main.cpp
    fibonacci.cpp)

set(HEADERS
    fibonacci.h)

add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})
