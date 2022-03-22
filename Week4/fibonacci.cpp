#include <iostream>
#include <map>

using namespace std;

int calls = 0;

// RECURSION
int fib(int n)
{
    calls++;
    // return n <= 1 ? n : fib(n - 1) + fib(n - 2);
    // BASE CASE
    if (n <= 1)
    {
        return n;
    }

    // RECURSION
    return fib(n - 1) + fib(n - 2);
}

// RECURSION + MEMOIZATION
int fib(int n, map<int, int> &cache)
{
    calls++;
    // BASE CASE
    if (n <= 1)
    {
        return n;
    }

    // BASE CASE - IF FUNCTION CALL IS IN CACHE
    if (cache[n] != 0)
    {
        return cache[n];
    }

    // RECURSION CALCULATION
    cache[n] = fib(n - 1, cache) + fib(n - 2, cache);
    return cache[n];
}

// LOOP METHOD O(N)
int fibLoop(int n)
{
    int first = 0, second = 1, next;
    for (int i = 0; i <= n; i++)
    {
        cout << first << "\t";
        next = first + second;
        first = second;
        second = next;
    }
    cout << "\n";
}

// UTILITY FUNCTION
void resetCalls()
{
    calls = 0;
}

int main()
{
    map<int, int> cache;
    fibLoop(6);
    cout << fib(30) << endl;
    cout << "Function Calls " << calls << endl;
    resetCalls();
    cout << fib(100, cache) << endl;
    cout << "Function Calls " << calls << endl;
}
