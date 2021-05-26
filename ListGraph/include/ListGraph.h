//
// Created by dark0ghost on 26.05.2021.
//

#ifndef ACID_GRAPH_LISTGRAPH_H
#define ACID_GRAPH_LISTGRAPH_H
#include <IGraph.h>
#include <cstdio>
#include <list>
#include <vector>

class ListGraph: public IGraph{
    int meta;
    std::vector<std::list<int>> inStream, outStream;
public:
    explicit ListGraph(int size);

    explicit ListGraph(const IGraph& graph);

    void AddEdge(int from, int to) override;


    [[nodiscard]] int VerticesCount() const override;


    [[nodiscard]] std::vector<int> GetNextVertices(int vertex) const override ;

    [[nodiscard]] std::vector<int> GetPrevVertices(int vertex) const override ;
};
#endif //ACID_GRAPH_LISTGRAPH_H
