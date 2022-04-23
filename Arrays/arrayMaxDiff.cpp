// Maximum value of arr[j]-arr[i] where j>i

//naive 0(n^2)
// #include<bits/stdc++.h>
// using namespace std;

// void diff(int arr[], int n){
//     int maxDiff=arr[1]-arr[0];
//     for(int i=0;i<n-1;i++)
//     for(int j=i+1;j<n;j++)
//     maxDiff= max(maxDiff,arr[j]-arr[i]);
//     cout<<maxDiff;
// }

//efficient 0(n) AS:0(1)
#include<bits/stdc++.h>
using namespace std;

void diff(int arr[], int n){
    int maxDiff=arr[1]-arr[0];
    int minVal=arr[0];
    for(int j=0;j<n-1;j++)
    {
        maxDiff=max(maxDiff,arr[j]-minVal);
        minVal= min(minVal, arr[j]);
    }
    cout<<maxDiff;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    diff(arr,n);
    return 0;
}
