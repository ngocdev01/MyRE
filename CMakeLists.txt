cmake_minimum_required(VERSION 3.29)
project(MyGameEngine)

set(CMAKE_CXX_STANDARD 20)
find_package(Vulkan REQUIRED)

add_executable(MyGameEngine src/main.cpp
)

target_link_libraries(MyGameEngine Vulkan::Vulkan)
