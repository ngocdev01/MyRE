cmake_minimum_required(VERSION 3.29)
project(MyRE)

set(CMAKE_CXX_STANDARD 20)
find_package(Vulkan REQUIRED)
add_subdirectory(MyWindowAPI)

add_executable(MyRE src/main.cpp
)
target_link_libraries(MyRE Vulkan::Vulkan)

target_link_libraries(MyRE MyWindowAPI)

