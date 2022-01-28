#include<iostream>
using namespace std;
void reverse(int arr[], int n){
int temp[n],k=0;
for(int i=n;i>0;i--){
    temp[k]=arr[i];
    k++;
}
for(int i=0;i<k;i++){
    arr[i]=temp[i];
}
for(int i)
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    reverse(arr,n);
    return 0;
}