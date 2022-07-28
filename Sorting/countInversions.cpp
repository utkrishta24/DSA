// a pair (arr[i],arr[j]) forms an inversion when
// i<j and arr[i]>arr[j]
// 0 in sorted
// max in reverse sorted

#include <bits/stdc++.h>
using namespace std;

// naive O(n2)
int countInv(int arr[], int n)
{
    int res = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                res++;
            }
        }
    }
    return res;
}

// efficient O(nlogn)
//AS: O(n)
// merge sort
// every inversion (x,y) where x>y has possibilities:
// a) both x and y are in left half
// b) both x and y are in right half
// c) x is in left and y is in right half

int countAndMerge(int arr[], int l, int m, int r)
{
    int n1 = m - l + 1, n2 = r - m;
    int left[n1], right[n2];
    for (int i = 0; i < n1; i++)
    {
        left[i] = arr[i + l];
    }
    for (int j = 0; j < n2; j++)
    {
        right[j] = arr[m + 1 + j];
    }
    int res = 0, i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
        {
            arr[k] = left[i];
            i++;
        }
        else
        {
            arr[k] = right[j];
            j++;
            res = res + (n1 - i);
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = left[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = right[j];
        j++;
        k++;
    }
    return res;
}
int countInvEff(int arr[], int l, int r)
{
    int res = 0;
    if (l < r)
    {
        int m = l + (r - l) / 2;
        res += countInvEff(arr, l, m);
        res += countInvEff(arr, m + 1, r);
        res += countAndMerge(arr, l, m, r);
    }
    return res;
}

int main()
{
    int arr[] = {2, 4, 1, 3, 5};
    int n = 5;
    int l = 0;
    int r = n - 1;
    cout << countInv(arr, n);
    cout << "\n";
    cout << countInvEff(arr, l, r);
    return 0;
}
