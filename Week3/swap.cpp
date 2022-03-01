#include <iostream>
#include <array>

// BIG O NOTATION FOR SWAP - O(1) - BEST POSSIBLE O NOTATION
template <typename T>
void swap(T &a, T &b)
{
    // TEMPORARY VARIABLE
    T temp;

    // SWAP
    temp = a;
    a = b;
    b = temp;
}

// BIG O NOTATION OF TRAVERSING ARRAY - BIG O(N)
void printArray(std::array<int, 5> arr)
{
    // FOR LOOP
    for (int i : arr)
    {
        std::cout << i << std::endl;
    }
}

int main()
{
    // int x = 5;
    // int y = 10;

    // swap<int>(x, y);

    // std::cout << x << std::endl
    //           << y << std::endl;

    std::array<int, 5> myArr = {1, 2, 3, 4, 10};
    printArray(myArr);
}