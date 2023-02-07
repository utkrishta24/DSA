//given a fixed array and multiple queries of
//following types on the array, how to efficiently
//perform these queries

#include<bits/stdc++.h>
using namespace std;
//O(n)
// int prefixSum(int arr[],int n, int l, int r){
//     int sum=0;
//     for(int i=l;i<=r;i++){
//         sum+=arr[i];
//     }
//     return sum;
// }

//O(1) 
//arr= {2,8,3,9,6,5,4}
//preprocess 
//prefix_sum={2,10,13,22,28,33,37}

int prefixSum(int arr[],int n, int l, int r){
    int prefix_sum[n];
    prefix_sum[0]=arr[0];
    for(int i=1;i<n;i++){
        prefix_sum[i]=prefixSum[i-1]+arr[i];
    }
    if(l!=0)
        return (prefix_sum[r]-prefix_sum[l-1]);
    else
        return prefix_sum[r];
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int l,r;
    cin>>l>>r;
    int res = prefixSum(arr, n, l,r);
    cout<<res;
    return 0;
}
