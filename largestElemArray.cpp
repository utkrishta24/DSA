#include<iostream>
using namespace std;
int largest(int arr[], int n){
int l=arr[0],i;
for(int i=1;i<n;i++){
if(arr[i]>l){
l=arr[i];
}
}
return l;
}
int main(){
    int n,l;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    l=largest(arr,n);
    cout<<l;
    return 0;
}