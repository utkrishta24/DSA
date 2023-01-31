#include<bits/stdc++.h>
#include<string.h>
using namespace std;
void powerSet(string str){
    int n=str.length();
    int powSize=pow(2,n);
    for(int count=0;count<powSize;count++){
        for(int j=0;j<n;j++){
            if((count & (1<<j))!= 0)
            cout<<str[j];
        }
        cout<<endl;
    }
}

int main(){
    string str;
    cin>>str;
    powerSet(str);
return 0;
}

// 0(2^n *n)