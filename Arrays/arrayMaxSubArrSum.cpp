#include <bits/stdc++.h>
using namespace std;

// //naive : O(n^2) O(1)
// int maxSumSubArray(int arr[], int n)
// {
//     int res = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int curr = 0;
//         for (int j = i; j < n; j++)
//         {
//             curr = curr + arr[j];
//             res = max(curr, res);
//         }
//     }
//     return res;
// }

//O(n)
int maxSumSubArray(int arr[], int n)
{
    int res = 0;
    int maxEnding =arr[0];
    for (int i = 1; i < n; i++)
    {
            maxEnding = max(maxEnding + arr[i],arr[i]);
            res = max(maxEnding, res);
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int MAX = maxSumSubArray(arr, n);
    cout << MAX;
    return 0;
}