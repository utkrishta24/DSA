#include <bits/stdc++.h>
using namespace std;

// given low, high, mid
// low to mid are sorted and mid+1 to high is sorted, we have to merge sorted subarrays from low to high

//................Merge Function of Merge Sort................

//0(n)
//AS 0(n)

void merge(int a[], int low, int mid, int high)
{
    // setting up auxiliary arrays
    int n1 = mid - low + 1, n2 = high - mid;
    int left[n1], right[n2];
    for (int i = 0; i < n1; i++)
        left[i] = a[low + i];
    for (int i = 0; i < n2; i++)
        right[i] = a[mid + i + 1];
    // standard merge logic
    int i = 0, j = 0, k = 0;
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

int main()
{
    int a[] = {10, 15, 20, 40, 8, 11, 55};
    int low = 0;
    int mid = 3;
    int high = 6;
    merge(a, 0, 3, 6);
    for (int i = 0; i < 7; i++)
        cout<<a[i]<<" ";
    
    return 0;
}
