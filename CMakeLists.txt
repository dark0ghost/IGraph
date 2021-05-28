cmake_minimum_required(VERSION 3.19)
project(acid_graph)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(IGraph)
add_subdirectory(ListGraph)
add_subdirectory(MatrixGraph)
add_subdirectory(SetGraph)
add_subdirectory(ArcGraph)


add_executable(acid_graph main.cpp)
target_link_libraries(acid_graph libListGraph libMatrixGraph libSetGraph libArcGraph)