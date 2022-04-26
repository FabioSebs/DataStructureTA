# Week 9

### Sorting Algorithms

### Hash Maps

Alright we have covered linear data structures now let's discuss another data structure that is NOT linear. Hash Maps are very efficient and aim to do any type of retrieval and insertion in constant time. O(1). 

Hash Maps implement something called a **Hashing Function** which turns a key to an index which is then used to be stored into an array.

A Hash Map is a key-value store that uses an array and a hashing function to save and retrieve values.

Key : the identifier to a given value

Hash Function : This is a function that takes some type of input like a key and returns a special index

Compression function: A function that transforms its inputs into some smaller range of possible outputs.

### Facts and Key Points of a Hash Map

A Hash-Map is ---

- Built on top of an array using a special indexing system

- A key value storage structure with fast assignment and lookup transactions

- a table that represents a map from a set of keys to a set of values


### The Secret to Hash Maps

The secret to Hash Maps is a hash function. A hash function turns a key into an index in the underlying array.

### Challenges

A hash function may encounter a problem where a **collision** occurs. A collision is when the hashing function takes an input and outputs an index which is the same as a previous input. 

Two common and important methods are **Seperate Chaining** and **Open Addressing**. 

**Seperate Chaining** - where each array index points to a different data structure

**Open Addressing** - where a collision triggers a probing sequence to find where to store the value for a given key

### Code 

```c++
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
```


