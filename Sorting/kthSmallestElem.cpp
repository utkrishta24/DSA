#include <bits/stdc++.h>
using namespace std;
// naive O(nlogn)
// taking that array has distinct elements
// modifies array
int kthSmallest(int arr[], int n, int k)
{
    sort(arr, arr + n);
    return arr[k - 1];
}
// efficient : Quick Select Algo
// easy : lomuto partition and quick sort
// hoares can be used too
// worst: O(n2)
// avg: O(n) under assumptions:
// partition uses random fucntion to pick random pivot and this pivot uniformly picks any random element,
// this is called quick select algo
// better than this also exist median order statistics algo that gives in worst case linear: complex
// but this is used bcz it is simple

int lPartition(int arr[], int l, int r)
{
    int pivot = arr[r];
    int i = l - 1;
    for (int j = l; j <= r - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[r]);
    return (i + 1);
}

int kthSmallestEff(int arr[], int n, int k)
{
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int p = lPartition(arr, l, r);
        if (p == k - 1)
            return p;
        else if (p > k - 1)
            r = p - 1;
        else
            l = p + 1;
    }
    return -1;
}

int main()
{
    int arr[] = {10, 5, 30, 12};
    int k = 2;
    int n = 4;
    cout << kthSmallest(arr, n, k);
    cout << "\n";
    cout << arr[kthSmallestEff(arr, n, k)];
    return 0;
}
