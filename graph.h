#ifndef GRAPH_H
#define GRAPH_H

typedef struct Graph {
    int numVertices;
    int** adjMatrix;
} Graph;

Graph* createGraph(int vertices);
void addEdge(Graph* graph, int src, int dest);
void printGraph(Graph* graph);

#endif
