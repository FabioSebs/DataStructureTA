#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// RECURSION
bool binarySearch(vector<int> myVector, int left, int right, int target)
{
    // BASE CASE - MAKES SURE THAT YOUR RECURSION DOESNT STACK OVERFLOW

    if (right >= left)
    {
        int mid = left + (right - left) / 2;

        // MIDDLE CASE
        if (target == myVector[mid])
        {
            return true;
        }

        // LEFT CASE : IF TARGET IS LESS THAN MID LOOK TO THE RIGHT
        if (target < myVector[mid])
        {
            return binarySearch(myVector, left, mid - 1, target);
        }

        // RIGHT CASE
        return binarySearch(myVector, mid + 1, right, target);
    }
    return 0;
}

int main()
{
    // BINARY SEARCH ! WILL NOT WORK IN UNSORTED ARRAY/VECTOR
    vector<int> myVector = {80, 20, 45, 76, 12, 99, 100, 43, 56, 110};

    sort(myVector.begin(), myVector.end());

    cout << boolalpha << binarySearch(myVector, 0, myVector.size(), 56) << endl;
}