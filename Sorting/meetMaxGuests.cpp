// Meeting the maximum guests
// you are given arrival and departure times of the guests, you need to find the time to go to the pary so that you can meet maximum people.
// 0<= arr[i],dep[i]<=2359

#include <bits/stdc++.h>
using namespace std;

int maxCount(int arr[], int dep[], int n)
{
    sort(arr, arr + n);
    sort(dep, dep + n);
    int i = 1, j = 0, res = 1, curr = 1;
    while (i < n && j < n)
    {
        if (arr[i] <= dep[i])
        {
            curr++;
            i++;
        }
        else
        {
            curr--;
            j++;
        }
        res = max(res, curr);
    }
    return res;
}
// TC: nlogn