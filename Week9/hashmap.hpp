#include <list>
#include <string>
#include <iostream>
using namespace std;

class HashTable
{
private:
    static const int hashBuckets = 10;
    list<pair<int, string>> table[hashBuckets];

public:
    bool isEmpty() const;
    int hashFunction(int key);
    void insertItem(int key, string value);
    void removeItem(int key);
    string searchTable(int key);
    void printTable();
};

bool HashTable::isEmpty() const
{
    int sum;
    for (int i = 0; i < hashBuckets; i++)
    {
        sum += table[i].size();
    }

    if (!sum)
    {
        return true;
    }

    return false;
}

int HashTable::hashFunction(int key)
{
    return key % hashBuckets;
}

void HashTable::insertItem(int key, string value)
{
    int hashValue = hashFunction(key);
    auto &cell = table[hashValue];
    auto i = begin(cell);
    bool keyExists = false;
    for (; i != end(cell); i++)
    {
        if (i->first == key)
        {
            keyExists = true;
            i->second = value;
            cout << "Key exists Value Replaced" << endl;
            break;
        }
    }

    if (!keyExists)
    {
        cell.emplace_back(key, value);
    }

    return;
}

void HashTable::removeItem(int key)
{
    int hashValue = hashFunction(key);
    auto &cell = table[hashValue];
    auto i = begin(cell);
    bool keyExists = false;

    for (; i != end(cell); i++)
    {
        if (i->first == key)
        {
            keyExists = true;
            i = cell.erase(i);
            cout << "Item Removed" << endl;
            break;
        }
    }

    if (!keyExists)
    {
        cout << "Key not found. Pair not removed" << endl;
    }

    return;
}

void HashTable::printTable()
{
    for (int i = 0; i < hashBuckets; i++)
    {
        if (table[i].size() == 0)
            continue;

        auto ptr = table[i].begin();
        for (; ptr != table[i].end(); ptr++)
        {
            cout << "Key: " << ptr->first << " Value: " << ptr->second << endl;
        }
    }
    return;
}
