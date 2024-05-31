#include <iostream>
#include <list>
#include <vector>
#include <cstring>
#include <algorithm> // for std::sort

using namespace std;

class Data_Item {
public:
    string key;
    list<string> val;

    Data_Item() {
        key = "";
    }

    Data_Item(string k, string v) {
        key = k;
        val.push_back(v);
    }
};

class HashTable {
private:
    static const int size = 5;
    list<Data_Item> table[size];

public:
    int getHash(string key);
    void insert(string key, string val);
    void remove(string key);
    bool isKeyExist(string key);
    list<string> search(string key);
    void print();
};

int HashTable::getHash(string key) {
    int sum = 0;
    for (int i = 0; i < key.length(); i++) {
        sum = sum + key[i];
    }
    return sum % size;
}

void HashTable::insert(string key, string val) {
    int index = getHash(key);
    Data_Item di;
    di.key = key;
    //check key exists - get the list of that key and check whether the key is there in the list
    for (Data_Item& d : table[index]) {
        if (d.key == key) {
            d.val.push_back(val);
            return;
        }
    }
    di.val.push_back(val);
    table[index].push_back(di);
}


bool HashTable::isKeyExist(string key) {
    int index = getHash(key);
    for (Data_Item d : table[index]) {
        if (d.key == key)
            return true;
    }
    return false;
}

list<string> HashTable::search(string key) {
    int index = getHash(key);
    for (Data_Item& d : table[index]) {
        if (d.key == key)
            return d.val;
    }
    list<string> empty_list;
    return empty_list;
}

void HashTable::print() {
    // Create a vector of Data_Items to sort
    vector<Data_Item> items;
    for (int i = 0; i < size; i++) {
        for (Data_Item d : table[i]) {
            items.push_back(d);
        }
    }

    // Sort the vector by key
    sort(items.begin(), items.end(), [](const Data_Item& a, const Data_Item& b) {
        return a.key < b.key;
        });

    // Print the sorted items
    for (Data_Item d : items) {
        cout << d.key << " -- [ ";
        for (string v : d.val) {
            cout << v;
        }
        cout << " ]" << endl;
    }
}
