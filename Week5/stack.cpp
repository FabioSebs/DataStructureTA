#include <iostream>
// LINKER
#include "./stack.hpp"
#include <string>

int main()
{
    dsa::Stack<std::string> myStack;
    myStack.add("1");
    myStack.add("2");
    myStack.add("3");
    myStack.add("4");
    myStack.add("5");
    myStack.pop();
    myStack.pop();
    // std::cout << myStack.pop() << std::endl;
    // std::cout << myStack.pop() << std::endl;
    // std::cout << myStack.pop() << std::endl;
    // std::cout << myStack.pop() << std::endl;

    myStack.print();
}