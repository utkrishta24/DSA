#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int k)
{
    int high = n - 1;
    int low = 0;
    for (int i = low; i <= high; i++)
    {
        int mid = (high + low) / 2;
        if (arr[mid] == k)
            return mid;
        else if (arr[mid] > k)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << binarySearch(arr, n, k);
    return 0;
}