#ifndef GRAPH_H
#define GRAPH_H

typedef struct graph graph_t;
typedef struct node node_t;

//Graph initialisation function
graph_t* graph_create();
//Deletion function for graph
void graph_free(graph_t*);

//Add a node to the graph
node_t* graph_add_node(graph_t*, char);
//Remove and deallocate memory for a node in a graph
void graph_remove_node(graph_t*, node_t*);
//Gets the address of a node from its ID
//Returns NULL if one with that ID isn't found in the graph
node_t* graph_get_node(graph_t*, char);

//Adds an edge between 2 nodes
void node_add_edge(node_t*, node_t*);

//Returns the number of nodes in the graph
int graph_size(graph_t*);
//Returns a list of the addresses of the nodes in the graph
node_t** graph_nodes(graph_t*);

//Returns a list of nodes adjacent to the input node
node_t** node_adjacent(node_t*);
//Gives the number of adjacent nodes of a node
int node_adjacent_count(node_t*); 
#endif