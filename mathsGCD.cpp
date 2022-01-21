//Naive
// #include<bits/stdc++.h>
// using namespace std;

// int gcd(int a,int b){
//  int res=min(a,b);   //TC: O(min(a,b))
//  while(res>0){
//      if(a%res==0 and b%res==0){
//          break;
//      }
//      res--;
//  }
//  return res;
// }

// int main(){
//     int a,b;
//     cin>>a>>b;
//     int hcf=gcd(a,b);
//     cout<<hcf;
//     return 0;
// }

//Euclidean Algorithm Code
     //a=gx ,b=by, (a-b)=g(x-y)......g is gcd
// #include<bits/stdc++.h>
// using namespace std;

// int gcd(int a,int b){
//     while(a!=b){
//         if(a>b)
//         a=a-b;
//         else
//         b=b-a;
//     }
//     return a;
// }

// int main(){
//     int a,b;
//     cin>>a>>b;
//     int hcf=gcd(a,b);
//     cout<<hcf;
//     return 0;
// }

//Optimised Euclidean Algorithm Code
#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    
        if(b==0)
        return a;
        else
        return gcd(b,a%b);
}

int main(){
    int a,b;
    cin>>a>>b;
    int hcf=gcd(a,b);
    cout<<hcf;
    return 0;
}