#include <iostream>

using namespace std;

// REFERENCES AND POINTERS

// PASS BY VALUE

// PASS BY REFERENCE  {&}  AdressOf Operator
// AdressOf is used to make references and sticks to the address of the original reference!
// Address Cannot be changed~

// PASS BY POINTER  {*}   Pointer Operator
// Pointer Operator points to other addresses and can be changed whenever is suitable!

int main()
{
    int x = 10;

    int &xref = x;
    cout << &xref << endl;
    cout << x << endl;
    int y = 20;
    xref = y;
    cout << &xref << endl;
    cout << x << endl;
}