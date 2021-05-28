//
// Created by dark0ghost on 28.05.2021.
//

#include <IGraph.h>
#include "SetGraph.h"

SetGraph::SetGraph(int size): meta(size){

}

SetGraph::SetGraph(const IGraph &graph): meta(graph.VerticesCount()) {
    for(int i = 0; i < meta; i++){
        auto iter = graph.GetNextVertices(i);
        for(int& j : iter)
            AddEdge(i, j);
    }
}

void SetGraph::AddEdge(int from, int to) {

}

int SetGraph::VerticesCount() const {
    return 0;
}

std::vector<int> SetGraph::GetNextVertices(int vertex) const {
    return std::vector<int>();
}

std::vector<int> SetGraph::GetPrevVertices(int vertex) const {
    return std::vector<int>();
}
