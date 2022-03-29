#include <iostream>
#include <array>

// CONSTANT VARIABLES
#define MAX 100

// DECLARATIONS
namespace dsa
{
    // MULTI TYPE SUPPORT WITH TEMPLATES
    template <typename T>
    class Stack
    {
    public:
        // PROPERTIES
        std::array<T, MAX> items = {};
        int size;

        // CLASS FUNCTIONS
        Stack() : size(0){}; // CONSTRUCTOR
        void push(T item);
        T pop();
        T peak();
        void print();
    };
};

// IMPLEMENTATIONS
template <typename T>
void dsa::Stack<T>::push(T item)
{
    this->items[this->size] = item;
    this->size++; // INCREMENT SIZE
};

template <typename T>
T dsa::Stack<T>::pop()
{
    // ERROR HANDLE IF STACK IS EMPTY
    if (this->size == 0)
    {
        std::cout << "Stack is Empty!" << std::endl;
        return 0;
    }

    // POPPING
    --this->size;
    T lastitem = this->items[this->size];
    return lastitem;
};

template <typename T>
T dsa::Stack<T>::peak()
{
    // ERROR HANDLE IF STACK IS EMPTY
    if (this->size == 0)
    {
        std::cout << "Stack is Empty!" << std::endl;
        return 0;
    }

    // POPPING
    T lastitem = this->items[this->size];
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