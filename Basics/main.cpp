// STANDARD LIBRARY = BUILT IN FUNCTIONALITIES AND UTILITY CLASSES FOR C++
// PRE PROCESSOR OPERATOR
#include <iostream>
#include <string>
#include <array>
#include <vector>

using namespace std;

bool ternaryTest(bool x)
{
    x == true ? x = false : x = true;
    return x;
}

// C
int main()
{
    // INTEGRAL TYPES (NUMERICAL)
    unsigned int var1 = -5;      // AT MOST 16 BITS
    unsigned short var2 = 5;     // AT MOST 8 BITS;
    unsigned long var3 = 5;      // AT MOST 32 BITS;
    unsigned long long var4 = 5; // AT MOST 64 BITS;

    double var5 = 5.0;
    float var6 = 5.0;

    // CHAR
    char var7 = 'F';

    // STRINGS
    string var8 = "Hello World";

    // BOOLEANS
    bool var9 = true;

    // ARRAYS
    int var10[5] = {1, 2, 3, 4, 5};
    string var11[2] = {"Hello", "World!"};

    array<int, 5> var12 = {1, 2, 3, 4, 5};

    // VECTORS
    vector<string> var13 = {"My", "Name", "Is", "Fabio"};

    var13.pop_back();

    // ITERATOR VARIABLE < CONDITONAL < INCREMENTATION
    // for (int i = 0; i < var13.size(); i++)
    // {
    //     cout << var13[i] << endl;
    // }

    // ARRAY FOR CONTINUE PRACTICE

    array<int, 10> var14 = {2, 3, 4, 6, 8, 9, 31, 24, 5, 10};

    // FOR LOOPS
    for (int i : var14)
    {
        // SKIP THE EVEN NUMBERS
        if (i % 2 == 0)
        {
            continue;
        }
        std::cout << i << endl;
    }

    bool check = true;
    std::cout << "INVERTED BOOLEAN  " << boolalpha << ternaryTest(check) << endl;
    // WHILE LOOPS
    return 0;
}