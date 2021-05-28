//
// Created by dark0ghost on 28.05.2021.
//

#ifndef ACID_GRAPH_MATRIXGRAPH_H
#define ACID_GRAPH_MATRIXGRAPH_H


#include <IGraph.h>
#include <list>

class MatrixGraph : public IGraph{
    int meta;
    std::vector<std::vector<bool>> vBool;
public:
    explicit MatrixGraph(int size);

    explicit MatrixGraph(const IGraph& graph);

    void AddEdge(int from, int to) override;


    [[nodiscard]] int VerticesCount() const override;


    [[nodiscard]] std::vector<int> GetNextVertices(int vertex) const override ;

    [[nodiscard]] std::vector<int> GetPrevVertices(int vertex) const override ;
};


#endif //ACID_GRAPH_MATRIXGRAPH_H
