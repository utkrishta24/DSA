#include <iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int roll[]={101,108,103,105};
    int marks[]={70,80,40,90};
    vector<pair<int,int>> v;
    for(int i=0;i<4;i++)
    v.push_back({marks[i],roll[i]});
    sort(v.begin(),v.end(),greater<pair<int,int>>());    
    for(int i=0;i<4;i++){
        cout<<v[i].second<<" "<<v[i].first;
        cout<<endl;
    }
return 0;
}

// O(nlogn) time
// O(n) Space  can be reduced by reading input