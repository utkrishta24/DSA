#include<iostream>
using namespace std;
void insert(int arr[], int n){
int pos, item;
cin>>pos>>item;
for(int i=pos+1;i<n;i++){
    arr[i+1]=arr[i];
}
arr[pos]=arr[item];
for(int i=0;i<n;i++)
cout<<arr[i]<<" ";
}

int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
insert(arr,n);
for(int i=0;i<n;i++)
cout<<arr[i];
return 0;
}