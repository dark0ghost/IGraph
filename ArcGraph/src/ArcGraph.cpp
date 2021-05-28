//
// Created by dark0ghost on 28.05.2021.
//

#include "../include/ArcGraph.h"

ArcGraph::ArcGraph(int size): meta(size) {

}

ArcGraph::ArcGraph(const IGraph &graph): meta(graph.VerticesCount()) {
    for(int i = 0; i < meta; i++){
        std::vector<int> ve = graph.GetNextVertices(i);
        for(int j : ve)
            AddEdge(i, j);
    }
}

void ArcGraph::AddEdge(int from, int to) {
    for(const Element<int>& i : element)
        if(i.from == from && i.to == to)
            return;

    auto el = Element<int>{from, to};
    element.push_back(el);

}

int ArcGraph::VerticesCount() const {
    return meta;
}

std::vector<int> ArcGraph::GetNextVertices(int vertex) const {
    std::vector<int> res;
    for(auto& el: element){
        if(el.from == vertex)
            res.push_back(el.from);
    }
    return res;
}

std::vector<int> ArcGraph::GetPrevVertices(int vertex) const {
    std::vector<int> res;
    for(auto& el: element){
        if(el.to == vertex)
            res.push_back(el.from);
    }
    return res;
}
