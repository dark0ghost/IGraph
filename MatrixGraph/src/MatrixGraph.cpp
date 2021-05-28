//
// Created by dark0ghost on 28.05.2021.
//

#include "MatrixGraph.h"

MatrixGraph::MatrixGraph(int size): vBool(size), meta(size) {
    for(std::vector<bool> iter : vBool)
        iter.assign(meta, false);
}

MatrixGraph::MatrixGraph(const IGraph &graph):  meta(graph.VerticesCount()),vBool(graph.VerticesCount()) {
    for(std::vector<bool>& iter : vBool)
        iter.assign(meta, false);

    for(int i = 0; i < meta; i++){
        auto iter = graph.GetNextVertices(i);
        for(int j : iter)
            AddEdge(i, j);
    }
}

void MatrixGraph::AddEdge(int from, int to) {
    vBool[from][to] = true;
}

int MatrixGraph::VerticesCount() const {
    return meta;
}

std::vector<int> MatrixGraph::GetNextVertices(int vertex) const {
    std::vector<int> resp;
    for(int i = 0; i < meta; i++) {
        if (vBool[vertex][i])
            resp.push_back(i);
    }

    return resp;
}

std::vector<int> MatrixGraph::GetPrevVertices(int vertex) const {
    std::vector<int> resp;
    for(int i = 0; i < meta; i++) {
        if (vBool[i][vertex])
            resp.push_back(i);
    }
    return resp;
}
