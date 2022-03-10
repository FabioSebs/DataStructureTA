#include <iostream>


// O(N)
void iterate(int n)
{
    for (int i = 1; i <= n; i++)
    {
        std::cout << i << std::endl;
    }
}

// O(N)
void recursively(int max, int start)
{
    // BASE CASE - makes sure that your recursion doesnt throw a stack overflow
    if (start == max)
    {
        std::cout << start << std::endl;
        return;
    }
    // LOGIC
    std::cout << start << std::endl;

    // RECURSION
    recursively(max, start + 1);
}

// FACTORIAL FUNCTION
int factorial(int n)
{
    // BASE CASE
    if (n == 1)
    {
        return 1;
    }

    // LOGIC / RECURSION
    return n * factorial(n - 1);
}

int main()
{
    // recursively(5, 1);

    std::cout << factorial(100) << std::endl;
}