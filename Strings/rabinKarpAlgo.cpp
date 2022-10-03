#include <bits/stdc++.h>
using namespace std;

// 1. like naive, slide the pattern one by one
// 2. compare hash value of pattern and current text window. if hash values match, then only compare individual characters

// simple hash : sum of values
// problem : spurious hits
// p: hash value of pattern
// t: hash value of current window of text

void pattSearching(string &txt, string &pat)
{
    
}

int main()
{
    string txt = "abcabcd";
    string pat = "abcd";
    pattSearching(txt, pat);
    return 0;
}
