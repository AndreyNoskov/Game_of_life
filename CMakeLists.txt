cmake_minimum_required(VERSION 3.4)
project(cl_game_of_life)

find_package( OpenCV REQUIRED )

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Field.cpp Field.h GraphEngine.cpp GraphEngine.h PhysEngine.cpp PhysEngine.h GE_OpenCV.cpp GE_OpenCV.h)
add_executable(cl_game_of_life ${SOURCE_FILES})
target_link_libraries( cl_game_of_life ${OpenCV_LIBS} )