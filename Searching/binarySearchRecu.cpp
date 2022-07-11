#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int k, int low, int high)
{   
    if(low>high)
        return -1;
    int mid = (high + low) / 2;
        if (arr[mid] == k)
            return mid;
        else if (arr[mid] > k)
            return binarySearch(arr, k, low, mid - 1);
        else
            return binarySearch(arr, k, mid+1, high);
    
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
    int high = n - 1;
    int low = 0;
    cout << binarySearch(arr, k, low, high);
    return 0;
}