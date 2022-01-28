#include<iostream>
using namespace std;
int largest(int arr[], int n){
int l,m;
if(arr[0]>arr[1]){
    l=arr[0];
    m=arr[1];
}
else{
l=arr[1];
m=arr[0];
}
for(int i=2;i<n;i++){
if(arr[i]>l){
int temp=l;
l=arr[i];
m=temp;
}
}

return m;
}
int main(){
    int n,m;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    m=largest(arr,n);
    cout<<m;
    return 0;
}