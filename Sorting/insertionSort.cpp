// O(n2)
// 0(n2) worst case
// 0(n) in best case
// used in pratice for small arrays (TimSort and IntraSort)

// stable
// in-place

#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int arr[] = {2, 10, 8, 7};
    insertionSort(arr, 4);
    for (int i = 0; i < 4; i++)
        cout << arr[i] << " ";
    return 0;
}
