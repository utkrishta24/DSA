#include <bits/stdc++.h>
using namespace std;

// 0(n) at every level
// x+0(n)
// x=[logn] + 1

// 0(nlogn) 
// AS 0(n)

//................Merge Sort Algo................

void merge(int a[], int l, int m, int h)
{
    int n1 = m - l + 1, n2 = h - m;
    int left[n1], right[n2];
    for (int i = 0; i < n1; i++)
        left[i] = a[l + i];
    for (int i = 0; i < n2; i++)
        right[i] = a[m + i + 1];
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
        {
            a[k] = left[i];
            i++;
            k++;
        }
        else
        {
            a[k] = right[j];
            j++;
            k++;
        }
    }
    while (i < n1)
    {
        a[k] = left[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        a[k] = right[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (r > l) // at least two elements
    {
        int m = l + (r - l) / 2; // avoids overfl
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

int main()
{
    int a[] = {10, 5, 30, 15, 7};
    int l = 0;
    int r = 4;
    mergeSort(a, l, r);
    for (int i = 0; i <= 4; i++)
        cout << a[i] << " ";
    return 0;
}
