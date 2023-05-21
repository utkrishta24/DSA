#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void del(int arr[], int n, int pos){
    for(int i=pos;i<n;i++)
        arr[i]=arr[i+1];
    for(int i=0;i<n-1;i++)
    cout<<arr[i]<<" ";
}
int main(){
int n,pos;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
cin>>pos;
del(arr,n,pos);
return 0;
}
