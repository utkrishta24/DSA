#include <iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


int myCmp(pair<int,int> p1, pair<int,int> p2){
return p1.second > p2.second;
}

int main(){
    int roll[]={101,108,103,105};
    int marks[]={70,80,40,90};
    vector<pair<int,int>> v;
    for(int i=0;i<4;i++)
    v.push_back({roll[i],marks[i]});
    // sort(v.begin(),v.end());    //according to roll no. sorted bcz roll no is first element and increasing order
    sort(v.begin(),v.end(),myCmp); 
    for(int i=0;i<4;i++){
        cout<<v[i].first<<" "<<v[i].second;
        cout<<endl;
    }
return 0;
}