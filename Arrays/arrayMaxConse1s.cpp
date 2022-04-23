#include<iostream>
using namespace std;


// //naive : O(n^2) O(1)
// int maxConsecutive1s(bool arr[],int n){
//     int res=0;
//         for(int i=0;i<n;i++){
//             int curr=0;
//             for(int j=i;j<n;j++){
//                 if(arr[j]==1)
//                 curr++;
//                 else
//                 break;
//             }
//             res= max(curr,res);
//         }
//         return res;
// }


//efficient : O(n) O(1)
int maxConsecutive1s(bool arr[],int n){
    int res=0,curr;
        for(int i=0;i<n;i++){
                if(arr[i]==0)
                    curr=0;
                else{
                    curr++;               
                    res= max(curr,res);
                }

        }
        return res;
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int MAX= maxConsecutive1s(arr, n);
    cout<<MAX;
    return 0;
}