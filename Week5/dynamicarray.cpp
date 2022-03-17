#include <iostream>

int main()
{
    // Getting Input
    int x, n;
    std::cout << "Number of elements in the array: " << std::endl;
    std::cin >> n;

    // Dynamically Making the array
    int *arr = new int(n);

    // Entering the Array
    for (x = 0; x < n; x++)
    {
        std::cout << "Array[" << x << "]: ";
        std::cin >> arr[x];
        std::cout << std::endl;
    }

    // Printing the array
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << "\t";
    }
    std::cout << "\n";
    delete[] arr;
}