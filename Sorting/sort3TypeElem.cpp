// Sort an array of 0s, 1s, 2s.
// Three-way partitioning when multiple occurrences of a pivot may exist.
// Partitioning around a range.

#include <bits/stdc++.h>
using namespace std;

// naive 0(n) , AS 0(n)
// 4 traversal
void sortNai(int arr[], int n)
{
    int temp[n], i = 0;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] == 0)
        {
            temp[i] = arr[j];
            i++;
        }
    }
    for (int j = 0; j < n; j++)
    {
        if (arr[j] == 1)
        {
            temp[i] = arr[j];
            i++;
        }
    }
    for (int j = 0; j < n; j++)
    {
        if (arr[j] == 2)
        {
            temp[i] = arr[j];
            i++;
        }
    }
    for (int j = 0; j < n; j++)
        arr[j] = temp[j];
}

// efficient : Hoare's partition can solve this in 0(n) time and 0(1) AS
// one traversal

// .......Dutch National Flag Algo.......

void sort(int arr[], int n)
{
    int lo = 0, mid = 0, hi = n - 1;
    while (mid <= hi)
    {
        if (arr[mid] == 0)
        {
            swap(arr[lo], arr[mid]);
            lo++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[hi]);
            hi--;
        }
    }
}

int main()
{
    int arr[] = {0, 1, 2, 1, 1, 2};
    int n = 6;
    sort(arr, n);
    for (int j = 0; j < n; j++)
        cout << arr[j] << " ";
    return 0;
}
