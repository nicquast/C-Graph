#include "graph.h"

//Graph Structure
struct graph {
    node_t** nodes;
    int node_num;
    int node_cpct;
};

//Node Structure
struct node{
    node_t** adj_nodes;
    int adj_cpct;
    int adj_num;
    char id;
};