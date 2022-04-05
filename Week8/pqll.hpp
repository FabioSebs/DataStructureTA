#include <iostream>
#include <vector>

// CONSTANTS
#define MAX 100

// DECLARATIONS
namespace dsa_linkedlist
{
    class Node
    {
    public:
        // PROPERTIES
        int data;
        Node *next;

        // CONSTRUCTOR
        Node() : data(), next(NULL){};
        Node(int element) : data(element), next(NULL){};
    };

    class PriorityQueue
    {
    public:
        // PROPERTIES
        Node *head;
        Node *tail;
        int size;

        // CONSTRUCTOR
        PriorityQueue() : head(NULL), tail(NULL), size(0){};

        // CLASS FUNCTIONS
        void enqueue(int element);
        int dequeue();
        void bubble_sort();
        void print();
    };
};

// IMPLEMENTATION
void dsa_linkedlist::PriorityQueue::enqueue(int element)
{
    // CREATING NEW NODE
    dsa_linkedlist::Node *newNode = new dsa_linkedlist::Node(element);
    // CHECKING IF EMPTY
    if (this->size == 0)
    {
        this->head = newNode;
        this->tail = newNode;
        this->head->next = tail;
        this->size++;
        return;
    }

    // IF NOT EMPTY
    this->tail->next = newNode;
    this->tail = newNode;
    this->tail->next = NULL;
    this->size++;
    this->bubble_sort();
    return;
};

void dsa_linkedlist::PriorityQueue::bubble_sort()
{

    // Variables
    int temp;
    std::vector<int> sortingVector;
    dsa_linkedlist::Node *traverseNode = this->head;
    dsa_linkedlist::PriorityQueue tempPQ;

    // Clearing the Queue and Storing the Elements into a Vector
    while (traverseNode != NULL)
    {
        sortingVector.push_back(traverseNode->data);
        traverseNode = traverseNode->next;
    }

    // Sorting
    for (int i = 0; i < this->size; i++)
    {
        for (int j = i + 1; j < this->size; j++)
        {
            if (sortingVector[i] > sortingVector[j])
            {
                temp = sortingVector[i];
                sortingVector[i] = sortingVector[j];
                sortingVector[j] = temp;
            };
        };
    };

    // Recreating Linked List
    for (int i = 0; i < sortingVector.size(); i++)
    {
        if (i == 0)
        {
            dsa_linkedlist::Node *newNode = new dsa_linkedlist::Node(sortingVector[i]);
            this->head = newNode;
            this->tail = newNode;
            this->head->next = tail;
        }
        else
        {
            dsa_linkedlist::Node *newNode = new dsa_linkedlist::Node(sortingVector[i]);
            this->tail->next = newNode;
            this->tail = newNode;
        };
    };
};

int dsa_linkedlist::PriorityQueue::dequeue()
{
    dsa_linkedlist::Node *tempNode;
    tempNode = this->head;
    this->head = this->head->next;
    return tempNode->data;
}

void dsa_linkedlist::PriorityQueue::print()
{
    dsa_linkedlist::Node *traverseNode = this->head;

    while (traverseNode != NULL)
    {
        std::cout << traverseNode->data << std::endl;
        traverseNode = traverseNode->next;
    }
}