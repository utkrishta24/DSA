// performance
// m= no of slots in hash table
// n= no of keys to be inserted
// load factor lf = n/m  //small lf less collision
// expeceted chain length = lf
// expected time to search,insert,delete = O(1+lf)

// data structure to for storing chains
// linked list search del insert O(l)
// dynamic size array search del insert O(l): vector
// self balancing bst search del insert O(log l) not chache friendly: avl red black tree

#include <bits/stdc++.h>
using namespace std;

struct MyHash
{
    int BUCKET;
    list<int> *table;
    MyHash(int b){
        BUCKET=b;
        table=new list<int>[b];
    }
    void remove(int key){
        int i=key%BUCKET;
        table[i]=remove(key);
    }
    bool search(int key){
        int i=key%BUCKET;
        for(auto x: table[i])
            if(x==key)
                return true;
        return false;
    }
    void insert(int key){
        int i=key%BUCKET;
        table[i].push_back(key);
    }
};


//key value pair map : hash map implementation!!!