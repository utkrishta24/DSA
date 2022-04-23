#include <iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={101,108,103,105}
    vector<pair <int,int>> v;
    for(int i=0;i<4;i++)
    v.push_back({arr[i],i}); //make_pair
    sort(v.begin(),v.end());
    for(int i=0;i<4;i++){
        cout<<v[i].first<<" "<<v[i].second;
        cout<<endl;
    }
    return 0;
    }

    // O(nlogn) time
    // O(n) space