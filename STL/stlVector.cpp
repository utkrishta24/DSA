#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> v;
    v.push_back(10);
    v.push_back(24);
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    return 0;
}

// int main(){
//     vector <int> v{10,25,34};
//     for(int x:v)
//     cout<<x<<" ";
//     return 0;
// }

// int main(){
//     int n=3,x=10;
//     vector <int> v(n,x);
//     for(auto it=v.begin();it<v.end();it++)
//     cout<<(*it)<<" ";
//     return 0;
// }

// int main(){
    
//     int arr[]={10,23,24};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     vector <int> v(arr,arr+n);
//     for(auto it=v.rbegin();it<v.rend();it++)
//     cout<<(*it)<<" ";
//     return 0;
// }