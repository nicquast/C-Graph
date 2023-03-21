#ifndef GRAPH_H
#define GRAPH_H

//Graph Structure
typedef struct {
    node_t** nodes;
    int node_num;
    int node_cpct;
} graph_t;

//Node Structure
typedef struct {
    node_t** adj_nodes;
    int adj_cpct;
    int adj_num;
    int id;
} node_t;

graph_t* graph_create();

node_t* graph_add_node(graph_t*, int);
void graph_remove_node(graph_t*, node_t*);

void add_edge(node_t*, node_t*)

#endif