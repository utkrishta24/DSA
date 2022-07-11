#include <bits/stdc++.h>
using namespace std;
int sqRoot(int n)
{
    int low = 0;
    int ans=-1;
    int high = n;
    while (low <= high)
    {  
        int mid = (low + high) / 2;
        int maybesq= mid*mid;
        if (maybesq==n) return mid;
        else if(maybesq>n) high=mid-1;
        else{
            low=mid+1;
            ans=mid;
        }
    }
    return ans;
}



int main()
{
    int n, k;
    cin >> n;
    cout << sqRoot(n);
    return 0;
}
