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
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    countPerm(arr,n);
    return 0;
}
