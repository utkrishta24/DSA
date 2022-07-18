#include <bits/stdc++.h>
using namespace std;

// much better than lomuto
// pivot always first element
// TC:0(n)
// AS:0(1)

// pivot is not at its correct position
// just ensures that upto i less than pivot elements are there and after that greater or equal elements

// corner case 1: pivot is smaller than all other= i=0,j=0 returns
// corner case 2: pivot is greater than all other= index last
// all elements are same=not stable

int hPartition(int arr[], int l, int h)
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
        } while (arr[i] > pivot);
        if (i >= j)
            return j;
        swap(arr[i], arr[j]);
    }
}

int main()
{
    int arr[] = {5, 3, 8, 4, 2, 7, 1, 10};
    int l = 0;
    int h = 7;
    cout << hPartition(arr, l, h);
    for (int i = 0; i <= h; i++)
        cout << arr[i];
    return 0;
}
