// Divide and conquer algo.
// stable
// 0(nlogn) time
// O(n) AS
//  well suited for linked list. works in O(1) AS.
// used in external sorting.
// in general for arrays, quick sort outperforms it.

#include <bits/stdc++.h>
using namespace std;

// efficient
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int min_ind = i;
        for (int j = i + 1; j < n; j++)
            if (arr[j] < arr[min_ind])
                min_ind = j;
        swap(arr[min_ind], arr[i]);
    }
}

int main()
{
    int arr[] = {2, 10, 8, 7};
    selectionSort(arr, 4);
    for (int i = 0; i < 4; i++)
        cout << arr[i] << " ";
    return 0;
}
