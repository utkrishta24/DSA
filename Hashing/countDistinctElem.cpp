#include <bits/stdc++.h>

// naive O(n^2) AS O(1)
int countDistinct(bool arr[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        bool flag = false;
        for (int j = 0; j < n; j++)
        {

            if (arr[i] == arr[j])
            {
                flag = true;
                break;
            }
            if (flag == false)
                res++;
        }
    }
    return res;
}

// efficient 0(n) AS: O(n)
int countDistinct(int arr[], int n)
{
    unordered_int<int> s;
    for (int i = 0; i < n; i++)
        s.insert(arr[i]);
    return s.size();
}

//improved 0(n) AS: O(n)
int countDistinct(int arr[], int n)
{
    unordered_int<int> s(arr,arr+n);
    return s.size();
}