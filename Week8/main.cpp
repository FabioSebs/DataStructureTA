#include "./pqarr.hpp"
#include "./pqll.hpp"

int main()
{
    dsa_linkedlist::PriorityQueue myPQ;
    myPQ.enqueue(10);
    myPQ.enqueue(20);
    myPQ.enqueue(5);
    myPQ.enqueue(7);
    myPQ.enqueue(8);
    myPQ.print();
}