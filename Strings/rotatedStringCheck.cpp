#include<bits/stdc++.h>
using namespace std;

//Naive: O(n2) times

//Efficient: O(n) two solutions:  1st pattern search , 2nd concatenate s1 with itself and find s2 in it

bool arrRotations(string &s1, string &s2)
{
    if(s1.length()!=s2.length()) 
        return false;
    return ((s1+s1).find(s2)!=string::npos);
}

int main()
{
    
 return 0;
}

