#include <iostream>

//  &  *

// PASS BY REFERENCE
void changeMe(int &x)
{
    x = 100;
    // std::cout << x << std::endl;
}

int main()
{
    int x = 10;
    // PASS BY VALUE
    changeMe(x);

    std::cout << x << std::endl;
}