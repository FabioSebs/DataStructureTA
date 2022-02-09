// VARIABLES
#include <iostream>

using namespace std;

int main()
{
    // Numerical Variables **Signed and Unsigned**
    int a = 5;
    short b = 5;    // Takes less memory in bytes
    long c = 5;     // Takes more memory in bytes
    double d = 5.0; // Decimals
    float e = 5.0;

    // Non Numerical Variables
    char myChar = 'a';
    char myString[6] = {'h', 'e', 'l', 'l', 'o'};
    string myBetterString = "hello";

    // Immutable aka Constants
    const int f = 5;
    const char e = 'e';

    return 0;
}