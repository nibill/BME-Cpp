cmake_minimum_required(VERSION 2.8)

project(02exercises)


set(SOURCES
    main.cpp
    functions.cpp
    calculator.cpp
    pi.cpp)
set(HEADERS
    functions.h
    calculator.h
    pi.h)

add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})
