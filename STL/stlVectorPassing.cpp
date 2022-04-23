#include<iostream>
#include<vector>
using namespace std;

void fun(const vector <int> &v){
//    v.pop_back();
    for(int x:v)
    cout<<x<<" ";
    cout<<endl;
}

int main(){
    vector <int> v{10,5,2,14};
    fun(v);


    return 0;
}