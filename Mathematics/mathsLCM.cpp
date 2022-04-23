//naive
// #include<bits/stdc++.h>
// using namespace std;

// int lcm(int a,int b){
//     int res=max(a,b);  //TC: O(a*b-max(a,b))
//     while(1){
//         if(res%a==0 && res%b==0)
//         return res;
//         res++;
//     }
//     return res;
// }

// int main(){
//     int a,b;
//     cin>>a>>b;
//     int LCM=lcm(a,b);
//     cout<<LCM;
//     return 0;
// }

//efficient solution
#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){   //TC:log(min(a,b))
    if(b==0)
    return a;
    return (b,a%b);
}

int lcm(int a,int b)
{
    return a*b/gcd(a,b);
}
int main(){
    int a,b;
    cin>>a>>b;
    int LCM=lcm(a,b);
    cout<<LCM;
    return 0;
}