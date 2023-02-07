//Check Kth bit is set or not

#include <bits/stdc++.h>
using namespace std;

// //using left shift
// void KthBit(int n, int k)
// {
//     if (n & (1 << (k - 1)) != 0)
//     cout<<"yes";
//     else
//     cout<<"no";
// }

//using right shift
void KthBit(int n, int k)
{
    if (n >> (k-1) & 1 == 1)
    cout<<"yes";
    else
    cout<<"no";
}

int main()
{
    int n, k;
    cin >> n >> k;
    KthBit(n, k);
}
