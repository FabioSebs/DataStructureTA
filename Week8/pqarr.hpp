#include <iostream>
#include <array>

// CONSTANTS
#define MAX 100

// DECLARATIONS
namespace dsa_array
{
    class PriorityQueue
    {
    public:
        // PROPERTIES
        std::array<int, MAX> items;
        int size;
        int i;

        // CONSTRUCTOR
        PriorityQueue() : items(), size(0), i(0){};

        // CLASS FUNCTIONS
        void enqueue(int element);
        int dequeue();
        void bubble_sort();
        void print();
    };
};

// IMPLEMENTATION
void dsa_array::PriorityQueue::enqueue(int element)
{
    this->items[this->size] = element;
    ++this->size;

    if (this->size > 1)
    {
        this->bubble_sort();
    }
};

void dsa_array::PriorityQueue::bubble_sort()
{
    // Variables
    int temp;

    // Sorting
    for (this->i; i < this->size; this->i++)
    {
        for (int j = i + 1; j < this->size; j++)
        {
            if (this->items[i] > this->items[j])
            {
                temp = this->items[i];
                this->items[i] = this->items[j];
                this->items[j] = temp;
            };
        };
    };

    this->i = 0;
};

int dsa_array::PriorityQueue::dequeue()
{
    return this->items[this->i++];
}

void dsa_array::PriorityQueue::print()
{
    for (int x = this->i; x < this->size; x++)
    {
        std::cout << this->items[x] << std::endl;
    }
}