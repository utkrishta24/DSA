#include <utility>
// #include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;
void sortChar(int a[], char b[], int n){
pair <int, char> pa[n];
for(int i=0;i<n;i++){
    pa[i]={a[i],b[i]};
}
sort(pa,pa+n);
for(int i=0;i<n;i++)
cout<<pa[i].second<<" ";
}

int  main(){
    int n;
    cin>>n;
int a[n];
char b[n];
for(int i=0;i<n;i++)
cin>>a[i];
for(int i=0;i<n;i++)
cin>>b[i];
sortChar(a,b,n);
return 0;
}