// divide and conquer algorithm
// worst case time: O(n2)
// despite O(n2) worst case, it is considered faster, bcz of the following reasons:
// in place
// cacher friendly
// avg cse is O(nlogn)
// tail recursion
// partition is key function(naive, lomuto, hoare)
// if dont need stability then quick otherwise merge

#include <bits/stdc++.h>
using namespace std;

int lPartition(int arr[], int l, int h)
{
    int pivot = arr[h];
    int i = l - 1;
    for (int j = l; j <= h - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[h]);
    return (i + 1);
}

void qsort(int arr[], int l, int h)
{
    if (l < h)
    {
        int p = lPartition(arr, l, h);
        qsort(arr, l, p - 1);
        qsort(arr, p + 1, h);
    }
} // considering lomuto partition

int main()
{
    int arr[] = {10, 80, 30, 90, 40, 50, 70};
    int l = 0;
    int h = 6;
    qsort(arr, l, h);
    for (int i = 0; i < h + 1; i++)
        cout << arr[i] << " ";
    return 0;
}
