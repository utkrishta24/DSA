#include <bits/stdc++.h>
using namespace std;

//TC:0(n)
//AS:0(n)
bool palindrome(string &str){
    string rev=str;
    reverse(rev.begin(),rev.end());
    return (rev==str);
}

//effective:
//TC:O(n)
//AS:0(1)
bool palindrome(string str){
    int begin=0;
    int end=str.length();
    while(begin<end){
        if(str[begin]!=str[end])
            return false;
        begin++;
        end--;
    }
    return true;
}

// bool palindrome(string str){
//     int n=str.length();
//     for(int i=0;i<=n/2;i++){
//         if(str[i]!=str[n-i-1])
//             return false;
//     }
//     return true;
// }

int main()
{
    string str = "abccba";
    cout<<palindrome(str);
    return 0;
}
