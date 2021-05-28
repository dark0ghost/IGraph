//
// Created by dark0ghost on 28.05.2021.
//

#ifndef ACID_GRAPH_ARCGRAPH_H
#define ACID_GRAPH_ARCGRAPH_H


#include <IGraph.h>
#include <Element.h>

class ArcGraph: public IGraph {

    int meta;
    std::vector<Element<int>> element;
public:
    explicit ArcGraph(int size);

    explicit ArcGraph(const IGraph& graph);

    void AddEdge(int from, int to) override;


    [[nodiscard]] int VerticesCount() const override;


    [[nodiscard]] std::vector<int> GetNextVertices(int vertex) const override ;

    [[nodiscard]] std::vector<int> GetPrevVertices(int vertex) const override ;

};


#endif //ACID_GRAPH_ARCGRAPH_H
