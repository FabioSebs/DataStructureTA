#include <iostream>
#include <vector>
// Declarations

namespace dsa
{
    template <typename T>
    class Vertex
    {
    public:
        // Properties
        T value;
        int weight;
        std::vector<Vertex> edges;
        int links;

        // Constructor
        Vertex(T v, int w) : value(v), weight(w), links(0) {};
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
        int Find(T val);
        void AddLink(T val, dsa::Vertex<T> edge);
        void Display();
        void Remove(T val);
    };

}

template <typename T>
void dsa::Graph<T>::Add(dsa::Vertex<T> vertex)
{
    this->graph.emplace_back(vertex);
    this->size++;
}

template <typename T>
int dsa::Graph<T>::Find(T val)
{
    for (int i = 0; i < this->size; i++)
    {
        dsa::Vertex<T> vertex = this->graph[i];
        if (vertex.value == val) {
            return i;
        } 
    }
    return 999;
}

template <typename T>
void dsa::Graph<T>::AddLink(T val, dsa::Vertex<T> edge) {
    int idx = this->Find(val);
    dsa::Vertex<T> &myVertex = this->graph[idx];
    myVertex.edges.emplace_back(edge);
    myVertex.links++;
    // std::cout << myVertex.links << std::endl;
}

template <typename T>
void dsa::Graph<T>::Display(){
    for (int i = 0 ; i < this->size; i++) {
        dsa::Vertex<T> myVertex = this->graph[i];
        std::cout << myVertex.value << " ---->\t";
        for (int j = 0; j < myVertex.links; j++) {
            dsa::Vertex<T> myEdge = myVertex.edges[j];
            std::cout << myEdge.value << "\t";
        }
        std::cout << std::endl;
    }
}
template <typename T>
void dsa::Graph<T>::Remove(T val) {
    int idx = this->Find(val);
    if (idx == 999){
        std::cout << "Not Found!" << std::endl;
        return;
    }
    this->graph.erase(this->graph.begin()+idx);
    this->size--;

    for (int i = 0 ; i < this->size; i++) {
        dsa::Vertex<T> &myVertex = this->graph[i];
        // std::cout << myVertex.edges.size() << std::endl;
        for(int j = 0; j < myVertex.edges.size(); j++){
            dsa::Vertex<T> &myEdge = myVertex.edges[j];
            if (myEdge.value == val) {
                // std::cout << myEdge.edges.size() << std::endl;
                myVertex.edges.erase(myVertex.edges.begin()+j);
                myVertex.links--;
                // std::cout << myEdge.links << std::endl;
            }
        }
        return;
    }
   
}