add_library(libArcGraph SHARED include src/ArcGraph.cpp)
target_include_directories(libArcGraph PUBLIC include)
target_link_libraries(libArcGraph libIGraph)