#include <iostream>
#include "./linkedlist.hpp"
#include <string>

using namespace std;

int main()
{
    dsa::LinkedList<string> myList;
    myList.addToList("Welcome");
    myList.addToList("To");
    myList.addToList("DSA");
    myList.addToList("Week");
    myList.addToList("5");
    myList.printList();
}