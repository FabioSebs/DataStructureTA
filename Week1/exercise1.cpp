#include <iostream>
#include <array>

using namespace std;

int main()
{
    // ARRAY
    // int arr[9] = {3, 49, 1, 6, 33, 13, 9, 4, 6};
    array<int, 9> arr = {3, 49, 1, 6, 33, 13, 9, 4, 6};

    // INPUT AND OUTPUT
    int key;
    cout << "What data are you searching for??" << endl;
    cin >> key;

    // TRAVERSE THROUGH THE ARRAY
    for (int i = 0; i < arr.size(); i++)
    {
        //  FIND KEY
        if (arr[i] == key)
        {
            cout << "Found element in index - " << to_string(i) << endl;
            break;
        }

        // END OF ARRAY
        if (i == arr.size() - 1)
        {
            cout << "Not Found!" << endl;
        }
    }
}