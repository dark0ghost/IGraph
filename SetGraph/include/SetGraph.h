//
// Created by dark0ghost on 28.05.2021.
//

#ifndef ACID_GRAPH_SETGRAPH_H
#define ACID_GRAPH_SETGRAPH_H

#include <vector>
#include <unordered_set>
#include <IGraph.h>

class SetGraph: public IGraph {
    int meta;
    [[maybe_unused]] std::vector<std::unordered_set<int>>  inStream, outStream;

public:
    explicit SetGraph(int size);

    explicit SetGraph(const IGraph& graph);

    void AddEdge(int from, int to) override;


    [[nodiscard]] int VerticesCount() const override;


    [[nodiscard]] std::vector<int> GetNextVertices(int vertex) const override ;

    [[nodiscard]] std::vector<int> GetPrevVertices(int vertex) const override ;

};


#endif //ACID_GRAPH_SETGRAPH_H
