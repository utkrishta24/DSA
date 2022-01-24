#include<bits/stdc++.h>
using namespace std;

//Left Shift: x<<y = x*(2^y)
// int main(){
//     int x=3,y=6;
//     cout<<(x<<1)<<endl;
//     cout<<(x<<2)<<endl;
//     int z=x<<y;
//     cout<<z<<endl;
// }

//Right Shift: x>>y = floor(x/(2^y))
// int main(){
//     int x=33,y=4;
//     cout<<(x>>1)<<endl;
//     cout<<(x>>2)<<endl;
//     int z=x>>y;
//     cout<<z<<endl;
// }

//Not Operator

//unsigned
//2^32 -1
// int main(){
//     unsigned int x=1;
//     cout<<(~x)<<endl;
//     x=5;
//     cout<<(~x)<<endl; // ~x = this is not of x
// }

 //signed
 //2's complement of x in bits rep:  2^n - x
 //-2^31 to 2^31 - 1
int main(){
     int x=1;
    cout<<(~x)<<endl;
    x=5;
    cout<<(~x)<<endl; // ~x = this is not of x
}