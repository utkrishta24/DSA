#include<bits/stdc++.h>
using namespace std;
//naive 
// void powerof2(int n){
//     if(n==0){
//         cout<<"NO";
//         return;
//     }
//      if(n==1){
//         cout<<"YES";
//         return;
//     }
//     while(n>1){
//         int res=n%2;
//         if(res!=0)
//         {
//             cout<<"NO";
//             return;
//         }
//         n=n/2;
//     }
//     cout<<"YES";
// }

//b-k algo efficient if returns 1 bit set as count means power of 2


//more efficient
bool powerof2(int n){
if(n==0)
return false;
return ((n & (n-1)) == 0); // return (n!=0) && ((n&(n-1)==0))
}

 int main(){
     int n;
     cin>>n;
     cout<<powerof2(n);
    return 0;
 }