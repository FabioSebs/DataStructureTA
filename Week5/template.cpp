#include <iostream>
#include <string>
// TEMPLATES - think of multiple data type support

template <typename T>
T concatOrAdd(T x, T y)
{
    return x + y;
}

// FUNCTION OVERIDING / OVERLOADING
// int concatOrAdd(int x, int y) // SIGNATURE = concatOrAdd(int x, int y)
// {
//     return x + y;
// }

// std::string concatOrAdd(std::string x, std::string y) // SIGNATURE = concatOrAdd(string x, string y)
// {
//     return x + y;
// }

// double concatOrAdd(double x, double y) // SIGNATURE = concatOrAdd(string x, string y)
// {
//     return x + y;
// }

int main()
{
    std::cout << concatOrAdd('!', '!') << std::endl;
}