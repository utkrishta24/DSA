#include<bits/stdc++.h>
using namespace std;
//naive O(n2)
// int maxEvenOdd(int arr[], int n){
//     int res=1;
//     for(int i=0;i<n;i++){
//         int curr=1;
//         for(int j=i+1;j<n;j++){
//             if((arr[j]%2==0 && arr[j-1]%2!=0)||(arr[j]%2!=0 && arr[j-1]%2==0))
//             curr++;
//             else
//             break;
//         }
//         res=max(res,curr);
//     }
//     return res;
// }

// efficient Kadane algo O(n2)
int maxEvenOdd(int arr[], int n){
    int res=1;
    int curr =1;
    for(int i=1;i<n;i++){
            if((arr[i]%2==0 && arr[i-1]%2!=0)||(arr[i]%2!=0 && arr[i-1]%2==0))
            {curr++;
            res=max(res,curr);}
            else 
            curr=1;
    }
    return res;
}



int main(){
int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int result = maxEvenOdd(arr, n);
    cout << result;
    return 0;
}