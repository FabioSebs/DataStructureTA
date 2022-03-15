#include <iostream>
#include <array>

// CONSTANT VARIABLE
#define MAX 100

namespace dsa
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
    std::cout << "SIZE PROPERTY: " << this->i << std::endl;

    for (int x = this->i; x < this->size; x++)
    {
        std::cout << this->items[x] << std::endl;
    }
}
