cmake_minimum_required(VERSION 3.5)

set(PROJECT_TEST test_function)

project(${PROJECT_TEST})

set(SOURCE
	./source/utest.c
	./source/cunit_cases.c)

set(HEADER
	./include/cunit_cases.h)

add_executable(${PROJECT_TEST} ${SOURCE} ${HEADER})
target_link_libraries(${PROJECT_TEST} cunit)