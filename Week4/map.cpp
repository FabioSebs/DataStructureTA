#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    // PAIR
    pair<string, int> myPair = {"banana", 2};

    // MAP
    map<string, int> myMap;
    map<int, int> myMap2;
    myMap.insert(pair<string, int>("banana", 2));
    myMap.insert(pair<string, int>("orange", 1));
    myMap.insert(pair<string, int>("cake", 5));

    cout << myMap2[1] << endl;
}