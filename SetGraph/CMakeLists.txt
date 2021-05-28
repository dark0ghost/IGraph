add_library(libSetGraph SHARED include src/SetGraph.cpp)
target_include_directories(libSetGraph  PUBLIC include)
target_link_libraries(libSetGraph libIGraph)