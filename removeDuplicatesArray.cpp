#include<iostream>
using namespace std;
void duplicate(int arr[], int n){
    int k=1;
    for(int i=1;i<n;i++){
        if(arr[k-1]!=arr[i]){
        arr[k]=arr[i];
            k++;}
        }
for(int i=0;i<k;i++)
cout<<arr[i]<<" ";
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    duplicate(arr,n);
    return 0;
}