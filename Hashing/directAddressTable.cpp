//Direct address table:
//1000 keys
//0-999
//O(1)

#include <bits/stdc++.h>
using namespace std;

void del(int table[],key){
    table[key]=0;
}

void add(int table[], key){
    table[key]=1;
}

int search(int table[], key){
    return table[key];
}

int main() {
    int table[1000];
                         
    return 0;
}


// 1000 - 2000 range keys
// table[key-1000]

// problem cant handle large keys
// floating point can be used as index
// keys can be strings and address so cant handle this