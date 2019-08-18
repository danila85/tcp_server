project(tcp_server)
cmake_minimum_required(VERSION 2.8)

find_package(Boost COMPONENTS thread REQUIRED)
#find_package(GTest REQUIRED)
find_package(GTest REQUIRED)

set(CMAKE_CXX_STANDARD 11)

add_executable(${PROJECT_NAME} main)

enable_testing()

target_link_libraries(${PROJECT_NAME} hash_server)

add_subdirectory(server)

