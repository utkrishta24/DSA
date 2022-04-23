//naive
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     cin>>arr[i];
//     int count =1;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]<arr[j])
//                 {  
//                 count=0;
//                 break;
//                 }
//         }
//         if(count==1)
//         cout<<arr[i]<<" ";
//         count=1;
//     }
//     return 0;
// }

//efficient
#include<bits/stdc++.h>
using namespace std;

void leader(int arr[], int n){
int c_lead= arr[n-1];
cout<<c_lead<<" ";
for(int i=n-3;i>=0;i--){
    if(c_lead<arr[i]){
        c_lead=arr[i];
        cout<<c_lead<<" ";
    }
}
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    leader(arr,n);
    return 0;
}