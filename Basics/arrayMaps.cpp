#include <iostream>
#include <vector>

using namespace std;

void displayArray(vector<int> example)
{
    for (const auto &val : example)
    {
        cout << val << endl;
    }
}

int main()
{
    vector<int> myVector = {1, 2, 3, 4, 5};

    myVector.pop_back();

    displayArray(myVector); // 1, 2, 3, 4
}