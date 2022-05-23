#include "./graph.hpp"
#include <iostream>
#include <string>

using namespace std;

int main() {
    dsa::Vertex<string> myVertex("Fabio", 7);
    dsa::Vertex<string> myVertex2("Renzo", 7);
    dsa::Vertex<string> myVertex3("Matt", 7);
    dsa::Graph<string> myGraph;

    myGraph.Add(myVertex);
    myGraph.AddLink("Fabio", myVertex2);
    myGraph.AddLink("Fabio", myVertex3);
    myGraph.Add(myVertex2);
    myGraph.Add(myVertex3);
    myGraph.Remove("Matt");
    // cout <<" test" << endl;
    myGraph.Display();
}