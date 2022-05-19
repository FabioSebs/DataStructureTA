#include "./hashmap.hpp"
#include <string>
#include <list>
#include <iostream>

using namespace std;

int main()
{
    // //Pair
    // pair<char, int> myPair = {'A', 90};
    // cout << myPair.first << endl;
    // cout << myPair.second << endl;

    // //List
    // int size =5;
    // list<pair<int,int>> myList[size];
    
    // // Appending to a list
    // myList[0].emplace_back(1,1);
    // myList[1].emplace_back(2,2);
    // myList[2].emplace_back(3,3);
    
    // //Going through the list
    // for (int i=0; i < size; i++ ){
    //     list<pair<int,int>> cell = myList[i];

    //     if (cell.size()) {
    //         list<pair<int, int>>::iterator ptr = begin(cell);
    //         cout << "Index: " << i << "\tKey: " << ptr->first << "\tValue: " << ptr->second << endl;
    //     }
    // }

    HashTable HT;

    if (HT.isEmpty()) {
        cout << "Empty" << endl;
    }

    HT.insertItem(1, "Fabio");
    HT.insertItem(2, "Jett");
    HT.insertItem(3, "Pheonix");
    HT.printTable();
    HT.removeItem(2);
    HT.printTable();

    return 0;
}