#include <iostream>
#include <vector>

using namespace std;

// DECLARATIONS
namespace dsa
{
    template <typename T>
    class Node
    {
    public:
        // PROPERTIES
        T data;
        Node<T> *left;
        Node<T> *right;

        // CONSTRUCTOR
        Node() : data(NULL), left(NULL), right(NULL){};
        Node(T x) : data(x), left(NULL), right(NULL){};

        // CLASS FUNCTIONS
        T getData();
        void setData(T data);

        Node<T> getLeft();

        void setLeft(Node<T> left);

        Node<T> getRight();

        void setRight(Node<T> right);
    };

    template <typename T>
    class BinaryTree
    {
    public:
        // PROPERTIES
        Node<T> *root;
        vector<T> display;
        int size;

        // CONSTRUCTOR
        BinaryTree() : size(0){};

        // CLASS FUNCTIONS
        void addToTree(T data);
        void traverseTree(Node<T> *nodeToAdd, Node<T> *nodeToSearch);
        void getRightTree(Node<T> *nodeToSearch);
        void getLeftTree(Node<T> *nodeToSearch);
    };
};

// IMPLEMENTATIONS

template <typename T>
T dsa::Node<T>::getData()
{
    return this->data;
};

template <typename T>
void dsa::Node<T>::setData(T data)
{
    this->data = data;
};

template <typename T>
dsa::Node<T> dsa::Node<T>::getLeft()
{
    return this->left;
};

template <typename T>
void dsa::Node<T>::setLeft(dsa::Node<T> left)
{
    this->left = left;
};

template <typename T>
dsa::Node<T> dsa::Node<T>::getRight()
{
    return this->right;
};

template <typename T>
void dsa::Node<T>::setRight(dsa::Node<T> right)
{
    this->right = right;
};

template <typename T>
void dsa::BinaryTree<T>::traverseTree(dsa::Node<T> *nodeToAdd, dsa::Node<T> *startNode)
{
    if (nodeToAdd->data > startNode->data)
    {
        if (startNode->right == NULL)
        {
            startNode->right = nodeToAdd;
            return;
        }
        traverseTree(nodeToAdd, startNode->right);
    }
    if (nodeToAdd->data < startNode->data)
    {
        if (startNode->left == NULL)
        {
            startNode->left = nodeToAdd;
            return;
        }
        traverseTree(nodeToAdd, startNode->left);
    }
}

template <typename T>
void dsa::BinaryTree<T>::addToTree(T data)
{
    dsa::Node<T> *newNode = new dsa::Node<T>(data);

    // LIST IS EMPTY
    if (!this->root)
    {
        this->root = newNode;
        return;
    }
    // LIST ISNT EMPTY
    traverseTree(newNode, this->root);
}

template <typename T>
void dsa::BinaryTree<T>::getRightTree(dsa::Node<T> *nodetoSearch)
{
    this->display.push_back(nodetoSearch->data);
    while (nodetoSearch->data)
    {
        if (nodetoSearch->left->data && nodetoSearch->data != this->root->data)
        {
            if (nodetoSearch->right->data)
            {
                dsa::BinaryTree<T>::getLeftTree(nodetoSearch->left);
                this->display.push_back(nodetoSearch->right->data);
                this->size++;
            }
        };

        if (nodetoSearch->right->data)
        {
            this->display.push_back(nodetoSearch->right->data);
            this->size++;
        }

        nodetoSearch = nodetoSearch->right;
    };

    for (T i : this->display)
    {
        cout << i << endl;
    }
    this->size = 0;
}

template <typename T>
void dsa::BinaryTree<T>::getLeftTree(dsa::Node<T> *nodetoSearch)
{
    this->display.push_back(nodetoSearch->data);
    while (nodetoSearch->data)
    {
        if (nodetoSearch->right != NULL && nodetoSearch->data != this->root->data)
        {
            if (nodetoSearch->left != NULL)
            {
                dsa::BinaryTree<T>::getRightTree(nodetoSearch->right);
                this->display.push_back(nodetoSearch->left->data);
                this->size++;
            }
        };

        if (nodetoSearch->left != NULL)
        {
            this->display.push_back(nodetoSearch->left->data);
            this->size++;
        }
        nodetoSearch = nodetoSearch->left;
    };

    for (T i : display)
    {
        cout << i << endl;
    }

    this->size = 0;
}