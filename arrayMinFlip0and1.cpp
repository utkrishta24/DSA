#include<bits/stdc++.h>
using namespace std;
//min zeroes or ones group flip to make same
//only 2 possiblities -> group count diff by 1 or 0
//naive
void groupFlip(int arr[], int n){
   for(int i=1;i<n;i++){
       if(arr[i]!=arr[i-1]){
           if(arr[i]!=arr[0])
           cout<<"From "<<i<<" to ";
            else
            cout<<(i-1)<<endl;
       }
   }
   if(arr[n-1]!=arr[0])
   cout<<(n-1)<<endl;
}


int main(){
int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    groupFlip(arr, n);
    return 0;
}