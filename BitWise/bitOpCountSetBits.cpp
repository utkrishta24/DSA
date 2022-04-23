#include <bits/stdc++.h>
using namespace std;

//simple
// void countSet(int n){
//  int res=0;
//     while(n>0){
//         if(n%2!=0)  //or if(n&1==1) or //res=res+(n&1);
//         res++;     //res++;
//         n=n/2;    //or n=n>>1;
//     }
// cout<<res;
// }

// Brian and Kerningham Algorithm
// void countSet(int n){
//     int res=0;
//     while(n>0){
//         n=(n&(n-1));
//         res++;
//     }
//     cout<<res;
// }

//Lookup Table 0(1)
//32 bit -> 8 bits chunks total 4 chunks
//0 to 2^7 - 1

int table[256];
void initialize()
{
    table[0] = 0;
    for (int i = 1; i < 256; i++)
        table[i] = (i & 1) + table[i / 2];
}
void countSet(int n)
{
    int res = table[n & 0xff];
    n = n >> 8;
    res = res + table[n & 0xff];
    n = n >> 8;
    res = res + table[n & 0xff];
    n = n >> 8;
    res = res + table[n & 0xff];
    cout << res;
}

int main()
{
    int n;
    cin >> n;
    countSet(n);
}