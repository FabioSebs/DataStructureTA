#include <iostream>
#include <string>
#include "./LinkedList.hpp"
using namespace std;

int main()
{
    dsa::LinkedList<int> myList;
    myList.addToList(1);
    myList.addToList(2);
    myList.addToList(10);
    myList.addToList(20);
    myList.addToList(100);
    myList.printList();
}