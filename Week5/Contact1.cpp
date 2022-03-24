#include <iostream>
#include "./ContactH.hpp"
int main()
{
    addcontact("David", 1234563344);
    addcontact("Tom", 1234496643);
    addcontact("Richard", 1238994425);
    addcontact("Gerald", 1238443444);
    printcontact();
    searchcontact("Hi");
    searchcontact("Richard");
    deletecontact("Richard");
    deletecontact("Gerald");
    printcontact();
    return 0;
};