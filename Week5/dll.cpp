#include <iostream>
#include "./dll.hpp"
#include <string>

int main()
{
    dsa::DoublyLinkedList<std::string> myDLL;

    myDLL.addToList("Testing"); // HEAD
    myDLL.addToList("My");
    myDLL.addToList("DLL");
    myDLL.addToList("TTV");
    myDLL.addToList("Fabrzy"); // TAIL

    std::cout << myDLL.getHead() << "-> HEAD" << std::endl;
    std::cout << myDLL.getTail() << "-> TAIL" << std::endl;
    dsa::Node<std::string> temp1 = *myDLL.getHead(true).next;
    dsa::Node<std::string> temp = *myDLL.getTail(true).prev;
    std::cout << temp1.getData() << "-> HEAD NEXT" << std::endl;
    std::cout << temp.getData() << "-> TAIL PREV" << std::endl;

    // myDLL.printList();
}