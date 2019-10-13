cmake_minimum_required(VERSION 3.13)
project(Equirectangular2Perspecective)

set(CMAKE_CXX_STANDARD 14)

# prepare common.h
set(TARGET_DIR "${CMAKE_CURRENT_LIST_DIR}")
if (EXISTS "${TARGET_DIR}/common.h.in")
    configure_file("${TARGET_DIR}/common.h.in"
            "${TARGET_DIR}/common.h" @ONLY)
endif()

find_package(OpenCV REQUIRED)

add_executable(Equirectangular2Perspecective main.cpp equirec2perspec.cpp equirec2perspec.h)

target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBS})