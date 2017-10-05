cmake_minimum_required(VERSION 3.9.3)
project (hello)
set(OpenCV_DIR "C:/Users/heroe/Documents/ProjektKompetencyjny/opnCV")
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
add_executable(hello TestApp1.cpp)
target_link_libraries(hello ${OpenCV_LIBS})
#install - dopisać
