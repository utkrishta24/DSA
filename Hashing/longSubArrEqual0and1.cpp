#include <bits/stdc++.h>

// naive O(n^2) AS:O(1)
int longestSub(bool arr[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        int c0 = 0, c1 = 0;
        for (int j = i; j < n; j++)
        {
            
            if (arr[j] == 0)
                c0++;
            else 
                c1++;
            if(c0==c1)
                res=max(res,j-i-1);
        }
    }
    return res;
}

// efficient O(n) AS: O(n)
// finding length of longest sum with 0 sum
// replace 0 with -1 in given sum=0
int longestSub(int arr[], int n)
{
    unordered_int <int> s;
    int pre_sum = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==0)
            arr[i]=-1;
    }
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
