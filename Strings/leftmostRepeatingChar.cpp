#include<bits/stdc++.h>
using namespace std;

const int CHAR=256;

//naive O(n2)
int naive_leftRepeated(string &str){
    for(int i=0;i<str.length();i++){
        for (int j = i+1; j < str.length(); j++)
        { 
            if(str[i]==str[j])
                return i;
        }
    }
    return -1;
}

//better O(n)
int better_leftRepeated(string &str){
    int count[CHAR]={0};
    for(int i=0;i<str.length();i++){
        count[str[i]]++;
    }
    for(int i=0;i<str.length();i++)
        if(count[str[i]]>1)
            return i;
}

//efficient 1 O(n+CHAR)
//AS O(CHAR) one traverse
int eff1_leftRepeated(string &str){
    int fIndex[CHAR];
    fill(fIndex,fIndex+CHAR,-1);
    int res=INT_MAX;
    for(int i=0;i<str.length();i++){
        int fi=fIndex[str[i]];
        if(fi==-1)
            fIndex[str[i]]=i;
        else
            res=min(res,fi);
    }
    return (res==INT_MAX)?-1:res;
}

//efficient 2 traverse from right to left

int eff2_leftRepeated(string &str){
    bool visited[CHAR];
    fill(visited,visited+CHAR,false);
    int res=-1;
    for(int i=str.length()-1;i>=0;i--){
        if(visited[str[i]])
            res=i;
        else
            visited[str[i]]=true;
    }
    return res;
}


int main()
{
    string str = "geeksforgeeks";
    cout << str[naive_leftRepeated(str)] << endl; //naive
    cout << str[better_leftRepeated(str)] << endl; //better
    cout << str[eff1_leftRepeated(str)] << endl; //eff1
    cout << str[eff2_leftRepeated(str)] << endl; //eff2
    return 0;
}

