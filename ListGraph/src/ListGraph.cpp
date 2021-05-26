//
// Created by dark0ghost on 26.05.2021.
//

#include <ListGraph.h>

ListGraph::ListGraph(int size): meta(size){

}

void ListGraph::AddEdge(int from, int to) {
    if(inStream.size() < outStream.size()){
        for(int i : inStream[to])
            if(i == from)
                return;
    }
    else{
        for(int i : outStream[from])
            if(i == to)
                return;
    }
    inStream[to].push_back(from);
    outStream[from].push_back(to);
}

ListGraph::ListGraph(const IGraph &igraph): meta(igraph.VerticesCount()) {
    for(int i = 0; i < meta; i++){
        std::vector<int> ve = igraph.GetNextVertices(i);
        for(int j : ve)
          AddEdge(i, j);
    }
}

int ListGraph::VerticesCount() const {
    return meta;
}

std::vector<int> ListGraph::GetNextVertices(int vertex) const {
    std::vector<int> res;
    for(auto& i : outStream[vertex]){
        res.push_back(i);
    }
    return res;
}

std::vector<int>ListGraph::GetPrevVertices(int vertex) const {
    std::vector<int> res;
    for(auto& i : inStream[vertex]){
        res.push_back(i);
    }
    return res;
}

