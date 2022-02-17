// Functions
#include <iostream>
#include <string>

using namespace std;

// OVER RIDING , FUNCTION SIGNATURES , TEMPLATE FUNCTIONS, GENERICS

template <typename ANYTYPE>
ANYTYPE concatenate(ANYTYPE x, ANYTYPE y)
{
    return x + y;
}

// string concatenate(string x, string y)
// {
//     return x + y;
// }

// ILLEGAL OVER- RIDING
// void concatenate(string x, string y){
//     cout << "NOOoOOOOo!" << endl;
// }

int main()
{
    cout << concatenate<int>(1, 3) << endl;
    cout << concatenate<string>("Hello ", "World!") << endl;
}