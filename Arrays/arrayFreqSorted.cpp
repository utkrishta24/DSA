
#include<bits/stdc++.h>
using namespace std;

// void freq(int arr[], int n){
//     int count=1;
//     for(int i=0;i<n;i++){
//         count=1;
//         for(int j=i+1;j<n;j++){
//             if(arr[i]==arr[j])
//             count++;
//         }
//         cout<<arr[i]<<" "<<count<<endl;
//     }
// }

//0(n)
void freq(int arr[], int n){ 
    int count=1,i=1;
    while (i<n)
    {
        while (i<n && arr[i]==arr[i-1])
        {
            count++;
            i++;
        }
        cout<<arr[i-1]<<" "<<count<<endl;
        i++;
        count =1;
    }
    if(n==1 || arr[n-1]!=arr[n-2])
    cout<<arr[n-1]<<" "<<1<<endl;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    freq(arr,n);
    return 0;
}