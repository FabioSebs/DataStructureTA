#include <iostream>
#include <vector>
#include <array>

int main()
{
    // STD LIBRARY
    std::vector<int> intVector = {1, 3, 5, 7, 9, 11, 13};

    std::vector<int>::iterator iteratorVector = intVector.begin();

    for (int i : intVector)
    {
        std::cout << i << std::endl;
    }
}