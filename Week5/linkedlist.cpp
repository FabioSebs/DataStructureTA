#include <iostream>
// IMPORT YOUR MODULE
#include "./linkedlist.hpp"
#include <string>

int main()
{
    dsa::LinkedList<std::string> myList;
    myList.addToList("Welcome");
    myList.addToList("To");
    myList.addToList("DSA");
    myList.addToList("Week");
    myList.addToList("5");
    std::cout << myList.head->data << std::endl;
    std::cout << myList.tail->data << std::endl;
    // myList.printList();
}