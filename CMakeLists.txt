cmake_minimum_required(VERSION 3.28)
project(sql_lite_clone C)

set(CMAKE_C_STANDARD 11)

add_executable(sqlite3 src/main.c
        src/common.h
        src/common.c
        src/command.h
        src/command.c)
