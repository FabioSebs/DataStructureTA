#include <iostream>

using namespace std;

int main()
{
    // Variables
    int first, second;
    float f_first, f_second;
    int op;

    // USER INPUT
    cout << "Enter the first number- " << endl;
    cin >> first;

    cout << "Enter the second number- " << endl;
    cin >> second;

    // ESCAPE SEQUENCES
    cout << "What calcualtion do you want?\nChoose 1: addition\nChoose 2: subtraction\nChoose 3: multiplication\nChoose 4: division" << endl;
    cin >> op;

    // CONDITIONALS
    // if (op == 1)
    // {
    //     cout << first + second << endl;
    // }
    // if (op == 2)
    // {
    //     cout << first - second << endl;
    // }
    // if (op == 3)
    // {
    //     cout << first * second << endl;
    // }
    // if (op == 4)
    // {
    //     cout << first / second << endl;
    // }

    // STRINGS WONT WORK WITH THIS
    switch (op)
    {
    case 1:
        cout << first + second << endl;
        break;
    case 2:
        cout << first - second << endl;
        break;
    case 3:
        cout << first * second << endl;
        break;
    case 4:
        cout << first / second << endl;
        break;
    default:
        cout << "Not Found!" << endl;
        break;
    }
}