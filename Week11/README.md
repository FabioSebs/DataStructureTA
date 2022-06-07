# Week 11 : Graphs

## Graph Terminology

Vertex/Vertices : another word for node/nodes in the graph

Edge : The link between two vertices in a graph

Degree of Vertex : How many edges a Vertex has

Path : The sequence of vertices traveled when going from an origin to a destination

Cycle : Where the path leads back to the first vertex traveled

Weighted Graph : A positive value assigned to each edge 

Undirected Graph : Bidirectional - you can go both ways

Directed Graph : Unidirectional - you can go one way

##  How to Represent a Graph

### Adjacency List

- Pros: An adjacency list is efficient in terms of storage because we only need to store the values for the edges. For a sparse graph with millions of vertices and edges, this can mean a lot of saved space.

- Cons: Finding the adjacent list is not quicker than the adjacency matrix because all the connected nodes must be first explored to find them.

### Adjacency Matrix

- Pros: The basic operations like adding an edge, removing an edge, and checking whether there is an edge from vertex i to vertex j are extremely time efficient, constant time operations.

- Pros: If the graph is dense and the number of edges is large, an adjacency matrix should be the first choice

- Cons: The NxN space requirement of the adjacency matrix makes it a memory hog. Graphs out in the wild usually don't have too many connections and this is the major reason why adjacency lists are the better choice for most tasks.

## Study Guide

### Questions
> What is better for representing a graph when it is very dense and why?

Adj. Matrix because the operations for retrieval and checking if there are edges in a graph is constant time. 

> What do you call a Graph that has costs associated with Edges?

Weighted Graphs

> What is the difference between Directed Graph and Undirected Graph?

### Plans for Next Week

- Were gonna perfect this Graph

- You guys are gonna do an in class assignment (making a Study Guide)

- Binary Trees + (Divide and Conquer/Recursive) Sorts

