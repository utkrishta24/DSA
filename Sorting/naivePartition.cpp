#include <bits/stdc++.h>
using namespace std;

// partitions: find position of pivot element
// stable: naive :: non-efficient
// unsatble: lemuto, hoare :: efficient

// TC:0(n)
// AS:0(n)

int partition(int arr[], int l, int h, int p)
{
    // create temp array
    int temp[h - l + 1], index = 0;
    // smaller
    for (int i = l; i <= h; i++)
        if (arr[i] < arr[p])
        {
            temp[index] = arr[i];
            index++;
        }
    // equal
    for (int i = l; i <= h; i++)
        if (arr[i] == arr[p])
        {
            temp[index] = arr[i];
            index++;
        }
    // last occurrence of pivot
    int res = l + index - 1;
    // greater
    for (int i = l; i <= h; i++)
        if (arr[i] > arr[p])
        {
            temp[index] = arr[i];
            index++;
        }
    // copy to original array
    for (int i = l; i <= h; i++)
        arr[i] = temp[i - l];
    return res;
}

int main()
{
    int arr[] = {5, 3, 12, 8, 5};
    int l = 0;
    int h = 4;
    int p = 0; //index of pivot 5
    cout << partition(arr, l, h, p);
    return 0;
}
