#include <iostream>
#include <array>
#include <string>
#include "./linkedlist.hpp"

// MAKE OUR LIST
int main()
{
    // CREATED LIST
    dsa::LinkedList<std::array<std::string, 5>> myContactList;
    int amount;
    // OUTPUT TO CONSOLE
    std::cout << "Please Enter Amount of Contacts! " << std::endl;

    // INPUT TO CONSOLE
    std::cin >> amount;

    // CREATING SEPERATE ARRAY BASED ON AMOUNT
    for (int i = 0; i < amount; i++)
    {
        std::array<std::string, 5> contact;
        std::cout << "Enter Contact Info (name, mobile number, email) " << std::endl;
        // INSERTION INTO ARRAY
        for (int x = 0; i < amount; x++)
        {
            std::string contactInfo;
            std::cin >> contactInfo;
            contact[x] = contactInfo;
        }
        myContactList.addToList(contact);
    }
}