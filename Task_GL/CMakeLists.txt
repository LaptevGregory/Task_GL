
cmake_minimum_required(VERSION 3.5)

set(PROJECT cmake)

project (${PROJECT})

set(SOURCES 
        ./source/main.c
        ./source/to_lower_case.c)

set(HEADERS
	./include/to_lower_case.h)

add_executable(${PROJECT} ${SOURCES} ${HEADERS})

add_subdirectory(test)
