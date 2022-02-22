// HEADERFILE
#include <iostream>
using namespace std;
// DECLARATIONS ---------------------------------------------------------------------------------------------

namespace dsa
{
    template <typename T>
    class Node
    {
    public:
        // PROPERTIES
        T data;
        Node<T> *next;

        // CONSTRUCTOR
        Node() : data(NULL), next(NULL){};
        Node(T x) : data(x), next(NULL){};

        // CLASS FUNCTIONS
        void setData(T data);

        T getData();

        void setNext(Node<T> *node);

        Node<T> getNext();
    };

    template <typename T>
    class LinkedList
    {
    public:
        // PROPERTIES
        dsa::Node<T> *head;
        dsa::Node<T> *tail;
        int size;

        // CONSTRUCTORS
        LinkedList() : head(NULL), tail(NULL), size(0){};

        // FUNCTIONS
        void addToList(T data);

        void printList();
    };
};

// IMPLEMENATIONS -----------------------------------------------------------------------------------

// CLASS FUNCTIONS
template <typename T>
void dsa::Node<T>::setData(T data)
{
    this->data = data;
}

template <typename T>
T dsa::Node<T>::getData()
{
    return this->data;
}

template <typename T>
void dsa::Node<T>::setNext(Node<T> *node)
{
    this->next = node;
}

template <typename T>
dsa::Node<T> dsa::Node<T>::getNext()
{
    return this->next;
}

template <typename T>
void dsa::LinkedList<T>::addToList(T data)
{
    // MAKING A NEW NODE FROM DATA
    dsa::Node<T> *newNode = new dsa::Node<T>(data);

    // LIST IS EMPTY
    if (size == 0)
    {
        this->head = newNode;
        this->tail = newNode;
        this->head->next = tail;
        this->size++;
        return;
    }
    // LIST IS NOT EMPTY
    this->tail->next = newNode;
    this->tail = newNode;
    this->size++;
    return;
}

template <typename T>
void dsa::LinkedList<T>::printList()
{
    dsa::Node<T> *traverseNode = this->head;

    while (traverseNode != NULL)
    {
        cout << traverseNode->data << endl;
        traverseNode = traverseNode->next;
    }
}
