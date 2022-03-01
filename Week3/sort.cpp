#include <iostream>
#include <array>

// BIG O NOTATION OF TRAVERSING ARRAY - BIG O(N)
void printArray(std::array<int, 10> arr)
{
    // FOR LOOP
    for (int i : arr)
    {
        std::cout << i << "\t";
    }
    std::cout << std::endl;
}

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

// BIG O NOTATION OF SORT - O(n^2)
void bubbleSort(std::array<int, 10> &myArr, int size)
{
    // ITERATOR/TRAVERSING VARIABLES
    int x, y;

    for (x = 0; x < size; x++)
    {
        for (y = 0; y < size - 1; y++)
        {
            if (myArr[y] > myArr[y + 1])
            {
                swap(myArr[y], myArr[y + 1]);
            }
        }
    }
}

int main()
{
    std::array<int, 10> myArr = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    bubbleSort(myArr, myArr.size());
    printArray(myArr);
}