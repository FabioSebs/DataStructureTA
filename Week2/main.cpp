#include <iostream>
#include <string>
using namespace std;

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
        void setData(T data)
        {
            this->data = data;
        }

        T getData()
        {
            return this->data;
        }

        void setNext(Node<T> *node)
        {
            this->next = node;
        }

        Node<T> getNext()
        {
            return this->next;
        }
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
        void addToList(T data)
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

        void printList()
        {
            dsa::Node<T> *traverseNode = this->head;

            while (traverseNode != NULL)
            {
                cout << traverseNode->data << endl;
                traverseNode = traverseNode->next;
            }
        }
    };
};
int main()
{
    dsa::LinkedList<string> myList;
    myList.addToList("I");
    myList.addToList("Am");
    myList.addToList("A");
    myList.addToList("Linked");
    myList.addToList("List");
    myList.printList();
}