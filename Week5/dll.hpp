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
        Node<T> *prev;

        // DEFAULT CONSTRUCTOR
        Node() : data(NULL), next(NULL), prev(NULL){};
        // CUSTOM CONSTRUCTOR
        Node(T x) : data(x), next(NULL), prev(NULL){};

        // CLASS FUNCTIONS
        void setData(T data);        //****
        T getData();                 //****                //****
        T getPrev();                 //****
        void setNext(Node<T> *node); //****
        void setPrev(Node<T> *node); //****
        Node<T> getNext();
    };

    template <typename T>
    class DoublyLinkedList
    {
    public:
        // PROPERTIES
        dsa::Node<T> *head;
        dsa::Node<T> *tail;
        int size;

        // CONSTRUCTORS
        DoublyLinkedList() : head(NULL), tail(NULL), size(0){};

        // FUNCTIONS
        void addToList(T data); //****
        void printList();
        T getTail();
        dsa::Node<T> getTail(bool flag);
        T getHead();
        dsa::Node<T> getHead(bool flag);
    };
};

// IMPLEMENATIONS -----------------------------------------------------------------------------------

// CLASS FUNCTIONS NODE
template <typename T>
void dsa::Node<T>::setData(T data)
{
    this->data = data;
    this->next = NULL;
    this->prev = NULL;
}

template <typename T>
T dsa::Node<T>::getData()
{
    return this->data;
}

template <typename T>
dsa::Node<T> dsa::Node<T>::getNext()
{
    return this->next;
}

template <typename T>
T dsa::Node<T>::getPrev()
{
    return this->prev;
}

template <typename T>
void dsa::Node<T>::setNext(Node<T> *node)
{
    this->next = node;
}

template <typename T>
void dsa::Node<T>::setPrev(Node<T> *node)
{
    this->prev = node;
}

// CLASS FUNCTIONS DOUBLY LINKED LIST
template <typename T>
void dsa::DoublyLinkedList<T>::addToList(T data)
{
    // MAKING A NEW NODE FROM DATA
    dsa::Node<T> *newNode = new dsa::Node<T>(data);
    dsa::Node<T> *temp = new dsa::Node<T>(data);

    // LIST IS EMPTY
    if (size == 0)
    {
        this->head = newNode;
        this->tail = newNode;
        this->head->next = tail;
        this->head->prev = NULL;
        this->tail->next = NULL;
        this->tail->prev = head;
        this->size++;
        return;
    }

    // LIST IS NOT EMPTY
    temp = this->tail;
    this->tail = newNode;
    this->tail->next = NULL;
    this->tail->prev = temp;
    temp->next = tail;

    temp = this->tail->prev;

    this->size++;
    return;
}

template <typename T>
void dsa::DoublyLinkedList<T>::printList()
{
    dsa::Node<T> *traverseNode = this->head;
    while (traverseNode != NULL)
    {
        cout << traverseNode->data << endl;
        traverseNode = traverseNode->next;
    }
}

template <typename T>
T dsa::DoublyLinkedList<T>::getHead()
{
    return this->head->data;
}

template <typename T>
dsa::Node<T> dsa::DoublyLinkedList<T>::getHead(bool flag)
{
    if (flag || !flag)
    {
        return *this->head;
    }
}

template <typename T>
dsa::Node<T> dsa::DoublyLinkedList<T>::getTail(bool flag)
{
    if (flag || !flag)
    {
        return *this->tail;
    }
}

template <typename T>
T dsa::DoublyLinkedList<T>::getTail()
{
    return this->tail->data;
}

