#include <iostream>
#include "importMe.h"

using namespace std;

int main()
{
    vehicle::Car toyota;
    toyota.setBrand("toyota");
    cout << toyota.getBrand() << endl;
}