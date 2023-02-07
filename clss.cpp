#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n)
{
    int high = n - 1;
    int low = 0;
    for (int i = low; i <= high; i++)
    {
        int mid = (high + low) / 2;
        if (arr[mid] == mid)
            return mid;
        else if (arr[mid] < mid)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main()
{
    int arr[6] = {-20, 1, 6, 8, 9, 15};
    cout << binarySearch(arr, 6);
    return 0;
}

// wap print all pairs in an array with target sum.
// max difference of pair in an array

