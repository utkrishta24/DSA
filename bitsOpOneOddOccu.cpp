//naive
//O(n^2)
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n,count;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     cin>>arr[i];
//     for(int i=0;i<n;i++){
//         count =0;
//         for(int j=0;j<n;j++){
//             if(arr[i]==arr[j])
//             count++;
//         }
//         if(count%2!=0)
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

//efficient XOR
// TC: O(n)
// AC: O(1)

// #include<bits/stdc++.h>
// using namespace std;

// int findOdd(int arr[],int n){
// int x=0; //x^0=x
// for(int i=0;i<n;i++)
// x=x^arr[i];
// return x;
// }

// int main(){
//     int n,count;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     cin>>arr[i];
//     int x=findOdd(arr,n);
//     cout<<x;
// return 0;
// }

// ..find the missing no. in an array in range 1 to n+1

#include<bits/stdc++.h>
using namespace std;

int findOdd(int arr[],int n){
int x=0; //x^0=x
for(int i=0;i<n;i++)
x=x^arr[i];
return x;
}

int main(){
    int n,count;
    cin>>n;
    int arr[n],brr[n+1];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=0;i<n+1;i++)
    brr[i]=i+1;
    int x=findOdd(arr,n);
    int y=findOdd(brr,n+1);
    cout<<(x^y);
return 0;
}