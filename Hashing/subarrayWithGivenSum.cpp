#include <bits/stdc++.h>

// naive O(n^2)
bool isSum(int arr[], int n, int sum)
{
    for (int i = 0; i < n; i++)
    {
        int curr_sum = 0;
        for (int j = i; j < n; j++)
        {
            curr_sum += arr[i];
            if (curr_sum == sum)
                return true;
        }
    }
    return false;
}

// efficient O(n) prefix sum+hashing
//presum-sum
//presum-0
bool isSum(int arr[], int n, int sum )
{
    unordered_int <int> s;
    int pre_sum = 0;
    for (int i = 0; i < n; i++)
    {
        pre_sum = pre_sum + arr[i];
        if (pre_sum == sum)
            return true;
        if (s.find(pre_sum - sum) != s.end())
            return true;
        
        s.insert(pre_sum);
    }
    return false;  
}
