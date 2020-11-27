cmake_minimum_required(VERSION 2.8)
project(test_log C)

set(CMAKE_C_STANDARD 99)

include_directories("./src")

set(CMAKE_C_FLAGS "-DLOG_USE_COLOR")

add_executable(log_test test/test_log.c)