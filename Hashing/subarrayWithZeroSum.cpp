#include <bits/stdc++.h>

// naive O(n^2)
bool isSum(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int curr_sum = 0;
        for (int j = i; j < n; j++)
        {
            curr_sum += arr[i];
            if (curr_sum == 0)
                return true;
        }
    }
    return false;
}

// efficient O(n) prefix sum+hashing
//presum-0
bool isSum(int arr[], int n)
{
    unordered_int <int> s;
    int pre_sum = 0;
    for (int i = 0; i < n; i++)
    {
        pre_sum = pre_sum + arr[i];
        if (s.find(pre_sum) != s.end())
            return true;
        if (pre_sum == 0)
            return true;
        s.insert(pre_sum);
    }
    return false;
}
