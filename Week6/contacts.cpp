#include <iostream>
#include "./LinkedList.hpp"
#include <string>

class Contact
{
    // ACCESS SPECIFIER
public:
    // PROPERTIES
    std::string name, number, email;

    // DEFAULT CONSTRUCTOR
    Contact() : name(NULL), number(NULL), email(NULL){};

    // CUSTOM CONSTRUCTOR
    Contact(std::string x, std::string y, std::string z) : name(x), number(y), email(z){};

    // CLASS FUNCTIONS
    std::string toString()
    {
        return this->name + " " + this->number + " " + this->email;
    }
};

int main()
{
    // ESSENTIAL VARIABLES
    dsa::LinkedList<std::string> myContactList;
    std::string name, number, email;
    int command;
    bool flag = true;

    std::cout << "Enter 1 to Add to List" << std::endl;
    std::cout << "Enter 2 to Delete from List" << std::endl;
    std::cout << "Enter 3 to Print  List" << std::endl;
    std::cout << "Enter 4 to Exit Program" << std::endl;

    do
    {
        std::cin >> command;

        switch (command)
        {
            // ADDING TO LIST
        case 1:
        {
            // USER INPUT
            std::cout << "Please Enter a Name: ";
            std::cin >> name;
            std::cout << "Please Enter a Phone Number: ";
            std::cin >> number;
            std::cout << "Please Enter an Email: ";
            std::cin >> email;

            // CREATING CONTACT WITH USER INPUT DATA
            Contact newContact(name, number, email);
            myContactList.addToList(newContact.toString());
            break;
        }
            // DELETING FROM LIST
        case 2:
        {
            break;
        }
            //  PRINTING LIST
        case 3:
        {
            myContactList.printList();
            break;
        }
            // EXITING PROGRAM
        case 4:
        {
            std::cout << "Goodbye!" << std::endl;
            flag = false;
            break;
        }
            // IF SOMEONE ENTERS UNSUPPORTED NUMBER
        default:
        {
            std::cout << "Unsupported Command!" << std::endl;
            flag = false;
            break;
        }
        }
    } while (flag);
}

// WHAT IS DIFFERENT ABOUT LINKED LIST AND QUEUES (FIFO) AND STACKS (LIFO)???
// ***USES POINTERS TO CONNECT ELEMENTS***