#include <iostream>
#include <vector>

// DECLARATIONS
namespace dsa
{
    template <typename T>
    class Vertex
    {
    public:
        // Properties
        T value;
        int weights;
        std::vector<Vertex> edges;
        int degree;

        // Constructor
        Vertex(T v, int w) : value(v), weights(w), degree(0){};

        // GETTERS/SETTERS only for private properties
    };

    template <typename T>
    class Graph
    {
    public:
        // Properties
        std::vector<dsa::Vertex<T>> graph;
        int size;
        // Constructor
        Graph() : size(0){};
        // Functions
        void Add(dsa::Vertex<T> vertex);
        int Find(T value);
        void Remove(T value);
        void AddEdge(T value, dsa::Vertex<T> edge);
        void Display();
    };
};

// IMPLEMENTATIONS
template <typename T>
void dsa::Graph<T>::Add(dsa::Vertex<T> v)
{
    this->graph.emplace_back(v);
    this->size++;
}

template <typename T>
int dsa::Graph<T>::Find(T value)
{
    // Going through graph and finding the value's respective index
    for (int i = 0; i < this->size; i++)
    {
        dsa::Vertex<T> vertex = this->graph[i];
        if (vertex.value == value)
        {
            return i;
        }
    }
    return 1000;
}

template <typename T>
void dsa::Graph<T>::Remove(T val)
{
    //Removing from the Graph
    int idx = this->Find(val);
    if (idx == 1000){
        std::cout << "Not Found!" << std::endl;
        return;
    }

    this->graph.erase(this->graph.begin() + idx); 
    this->size--;

    //Removing/Updating Edges
    for (int i = 0; i < this->size; i++){
        dsa::Vertex<T> &myVertex = this->graph[i];
        for (int j = 0; j < myVertex.edges.size(); j++) {
            dsa::Vertex<T> &myEdge = myVertex.edges[j];
            if (val == myEdge.value) {
                myVertex.edges.erase(myVertex.edges.begin()+j);
                myVertex.degree--;
            }
        }
    }
};

template <typename T>
void dsa::Graph<T>::AddEdge(T val, dsa::Vertex<T> edge)
{
    int idx = this->Find(val);
    dsa::Vertex<T> &vertex = this->graph[idx];
    vertex.edges.emplace_back(edge);
    vertex.degree++;
}

// ADJACENCY LIST
template <typename T>
void dsa::Graph<T>::Display()
{
    for (int i = 0; i < this->size; i++)
    {
        dsa::Vertex<T> myVertex = this->graph[i];
        std::cout << myVertex.value << " ----->\t";
        for (int j = 0; j < myVertex.degree; j++) {
            dsa::Vertex<T> edge = myVertex.edges[j];
            std::cout << edge.value << "\t";
        }
        std::cout << std::endl;
    }
}
