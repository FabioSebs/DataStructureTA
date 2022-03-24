#include <iostream>
#include <array>

// CONSTANT VARIABLE
#define MAX 100

namespace dsa // AVOIDING NAME COLLISIONS
{
    // DECLARATIONS
    template <typename T>
    class Queue
    {
    public:
        // PROPERTIES
        std::array<T, MAX> items;
        int size;
        int i; // iterator property

        // COSTRUCTOR
        Queue() : items(), size(0), i(0) {}

        // CLASS FUNCTIONS
        void enqueue(T item);
        T dequeue();
        void del(T item);
        bool search();
        void print();
    };
}

// IMPLEMENTATIONS
template <typename T>
void dsa::Queue<T>::enqueue(T item)
{
    // ACCESSING
    this->items[this->size] = item;
    // // INCREMENT
    ++this->size;
}

template <typename T>
T dsa::Queue<T>::dequeue()
{
    return this->items[this->i++];
}

template <typename T>
void dsa::Queue<T>::print()
{
    std::cout << "SIZE OF QUEUE: " << this->i << std::endl;
    int idx = 0;
    for (int x = this->i; x < this->size; x++)
    {
        std::cout << idx++ << ": " << this->items[x] << std::endl;
    }
}
template <typename T>
void dsa::Queue<T>::del(T item)
{
    dsa::Queue<int> tempQueue;

    for (int x = 0; x < this->size; x++)
    {
        if (this->items[x] != item)
        {
            tempQueue.enqueue(this->items[x]);
        }
    }

    this->items = tempQueue.items;
    this->size = tempQueue.size;
}