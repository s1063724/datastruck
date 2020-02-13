cmake_minimum_required(VERSION 3.15)
project(datastruck C)

set(CMAKE_C_STANDARD 11)

add_executable(test_stack testing/test_stack.c stack.c)