#include <bits/stdc++.h>

// naive O(n^2) AS:O(1)
int maxLen(int arr[], int n, int sum)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        int curr_sum = 0;
        for (int j = i; j < n; j++)
        {
            curr_sum += arr[i];
            if (curr_sum == sum)
                res = max(res, j - i + 1);
        }
    }
    return res;
}

// efficient O(n) AS:O(n) prefix sum+hashing
int maxLen(int arr[], int n, int sum)
{
    unordered_int<int, int> m;
    int pre_sum = 0, res = 0;
    for (int i = 0; i < n; i++)
    {
        pre_sum = pre_sum + arr[i];
        if (pre_sum == sum)
            res = i + 1;
        if (m.find(pre_sum) == m.end())
            m.insert({pre_sum, i});
        if (m.find(pre_sum - sum) != m.end())
            res = max(res, i - m[pre_sum - sum]);
    }
    return res;
}