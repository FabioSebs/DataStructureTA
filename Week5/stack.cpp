#include <iostream>
#include "./stack.hpp"

int main()
{
    dsa::Stack<int> myStack;
    myStack.add(1);
    myStack.add(2);
    myStack.add(3);
    myStack.add(4);
    myStack.add(5);
    // std::cout << myStack.pop() << std::endl;
    // std::cout << myStack.pop() << std::endl;
    // std::cout << myStack.pop() << std::endl;
    // std::cout << myStack.pop() << std::endl;
    // std::cout << myStack.pop() << std::endl;
    // std::cout << myStack.pop() << std::endl;

    myStack.print();
}