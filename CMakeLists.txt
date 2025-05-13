cmake_minimum_required(VERSION 3.10)
project(NanoTrader)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O3 -march=native -flto")

include_directories(src)

add_executable(nano-trader src/main.cpp src/matching_engine.cpp)

# Temporarily comment out the latency_test build
# add_executable(latency_test tests/latency_test.cpp)
