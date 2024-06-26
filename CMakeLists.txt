cmake_minimum_required(VERSION 3.28)
project(LoggerLIB-C C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_SHARED_LINKER_FLAGS "-static-libgcc -static-libstdc++ -Wl,-Bstatic -lstdc++ -lpthread")

add_library(LoggerLIB-C SHARED Message.c
        LoggerLIB.c
        headers/LoggerLIB.h
        headers/ArrayUtil.h
        headers/Message.h
        utils/ArrayUtil.c
)

set_target_properties(LoggerLIB-C PROPERTIES PREFIX "")