#include <ListGraph.h>
#include <SetGraph.h>
#include <ArcGraph.h>
#include <MatrixGraph.h>

constinit int size = 10;

int main() {
    ListGraph listGraph(size);
    SetGraph setGraph(size);
    ArcGraph arcGraph(size);
    MatrixGraph matrixGraph(size);

    ListGraph copyListGraph(setGraph);
    [[maybe_unused]] SetGraph copySetGraph(MatrixGraph);
    ArcGraph copyArcGraph(setGraph);
    MatrixGraph copyMatrixGraph(arcGraph);

    return 0;
}
