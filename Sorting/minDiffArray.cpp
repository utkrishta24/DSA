#include <bits/stdc++.h>
using namespace std;

// naive 0(n2)
int minDiff(int arr[], int n)
{
    int mini = INT_MAX;
    int res;
    if (n == 1)
        return INT_MAX;
    else
    {
        for (int i = 0; i < n - 1; i++) // i=1
        {
            for (int j = i + 1; j < n; j++) // j=0
            {
                res = abs(arr[i] - arr[j]);
                mini = min(mini, res);
            }
        }
    }
    return mini;
}

// efficient 0(nlogn + n) = 0(nlogn)
int minDiffeff(int arr[], int n)
{
    int mini = INT_MAX;
    int res;
    // if (n == 1)
    //     return INT_MAX;
    // else
    // {
    sort(arr, arr + n);
    for (int i = 1; i < n; i++)
    {
        res = abs(arr[i] - arr[i - 1]);
        mini = min(mini, res);
    }
    // }
    return mini;
}

int main()
{
    int arr[] = {10};
    int n = 1;
    cout << minDiff(arr, n);
    cout << "\n"
         << minDiffeff(arr, n);
    return 0;
}
