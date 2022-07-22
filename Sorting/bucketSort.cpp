#include <bits/stdc++.h>
using namespace std;

// consider a situation where we have number uniformly distributed in range from 1 to 10^8. How do we sort efficiently.

// consider another situation where we have floating point numbers uniformly d istributed in range 0.0 to 1.0(excluded).

void bucketSort(int arr[], int n)
{
    int count[k];
    for (int i = 0; i < k; i++)
        count[i] = 0;
    for (int i = 0; i < n; i++)
        count[arr[i]]++;

    int index = 0;
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < count[i]; j++)
        {
            arr[index] = i;
            index++;
        }
    }
}

int main()
{
    int arr[] = {1, 4, 4, 1, 0, 1};
    int k = 5;
    int n = 6;
    bucketSort(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}