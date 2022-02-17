#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    string day;
    cout << "What day is it today?" << endl;
    cin >> day;

    // transform(day.begin(), day.end(), day.begin(), ::toupper);

    if (day == "Saturday" || day == "Sunday")
    {
        cout << "Im going fishing" << endl;
    }
    else
    {
        cout << "Im studying" << endl;
    }
}