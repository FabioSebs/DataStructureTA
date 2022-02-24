#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // n = population or sample size
    vector<int> myVector = {1, 2, 3, 4, 5, 6, 7, 8, 9, 100};
    int target;
    int steps = 0;
    cout << "look for something: \n";
    cin >> target;

    // LINEAR = O(N)
    for (int i : myVector)
    {
        steps++;
        if (i == target)
        {
            cout << "true" << endl;
        };
    }
    cout << steps << endl;
}