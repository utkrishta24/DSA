#include <bits/stdc++.h>
using namespace std;

void countPerm(string s, int i=0)
{   
    if(i==s.length()-1)
        cout<<s<<" ";
    for(int j=i;j<s.length();j++){
        swap(s[i],s[j]);
        countPerm(s,i+1);
        swap(s[j],s[i]);
    }
}

int main()
{
    string s;
    cin>>s;
    int i=0;
    countPerm(s,i);
    return 0;
}
