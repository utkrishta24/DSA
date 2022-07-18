#include <bits/stdc++.h>
using namespace std;

// pivot always last element
// TC:0(n)
// AS:0(1)

// corner case 1: pivot is smaller than all other= index start
// corner case 2: pivot is greater than all other= index last
// if given pivot is not last element=simply swap it with last and apply lomuto

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

int main()
{
    int arr[] = {10, 80, 30, 90, 40, 50, 70};
    int l = 0;
    int h = 6;
    cout << lPartition(arr, l, h);
    return 0;
}
