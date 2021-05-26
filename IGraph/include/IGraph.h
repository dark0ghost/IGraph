//
// Created by dark0ghost on 26.05.2021.
//

#ifndef ACID_GRAPH_IGRAPH_H
#define ACID_GRAPH_IGRAPH_H

#include <vector>

struct IGraph {
    virtual ~IGraph() {}
    virtual void AddEdge(int from, int to) = 0;
    virtual int VerticesCount() const  = 0;
    virtual std::vector<int> GetNextVertices(int vertex) const = 0;
    virtual std::vector<int> GetPrevVertices(int vertex) const = 0;
};
#endif //ACID_GRAPH_IGRAPH_H
