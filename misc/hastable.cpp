#include <iostream>
#include <list>
#include <cstring>
using namespace std;

// Hashtable example: #, name

class HashTable {
private:
    static const int hashGroups = 10;
    list<pair<int, string>> table[hashGroups]; // Hash table list

public:
    bool isEmpty() const;
    int hashFunction(int key); // Hash Function: takes key and returns hash #
    void insertItem(int key, string value);
    void removeItem(int key);
    string searchItem(int key);

    void printTable();

};

bool HashTable::isEmpty() const
{
    int sum = 0;
    for (int i =0;  i < hashGroups; i++)
    {
        sum += table[i].size();
    }

    if (sum == 0)
    {
        return true;
    }
    return false;
}

int HashTable::hashFunction(int key) 
{
    return key % hashGroups;
}

void HashTable::insertItem(int key, string value)
{
    int hashValue = hashFunction(key);

    auto& location = table[hashValue]; // the auto type is used to store complicated locations / pointers
    // in this case, it is the location to a 
}