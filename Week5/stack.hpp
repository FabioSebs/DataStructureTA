#include <iostream>
#include <array>

#define MAX 100

// DECLARATIONS
namespace dsa
{
    template <typename T>
    class Stack
    {
    public:
        // PROPERTIES
        std::array<T, MAX> items = {};
        int size;

        // CLASS FUNCTIONS
        Stack() : size(0){};
        void add(T item);
        T pop();
        void print();
    };
};

// IMPLEMENTATIONS
template <typename T>
void dsa::Stack<T>::add(T item)
{
    this->items[this->size] = item;
    this->size++;
}

template <typename T>
T dsa::Stack<T>::pop()
{
    // std::cout << this->size << std::endl;
    if (this->size == 0)
    {
        std::cout << "Stack is Empty!" << std::endl;
        return 0;
    }

    --this->size;
    int lastitem = this->items[this->size];
    return lastitem;
}

template <typename T>
void dsa::Stack<T>::print()
{
    for (int i = this->size - 1; i >= 0; i--)
    {
        std::cout << this->items[i] << std::endl;
    }
}