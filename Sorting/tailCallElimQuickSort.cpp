#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int l, int h)
{
    int pivot = arr[l];
    int i = l - 1, j = h + 1;
    while (true)
    {
        do
        {
            i++;
        } while (arr[i] < pivot);
        do
        {
            j--;
        } while (arr[j] > pivot);
        if (i >= j)
            return j;
        swap(arr[i], arr[j]);
    }
}

void qsort(int arr[], int l, int h)
{
Begin:
    if (l < h)
    {
        int p = partition(arr, l, h);
        qsort(arr, l, p);
        // qsort(arr, p + 1, h);
        l = p + 1;
        goto Begin;
    }
}

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
