#include <bits/stdc++.h>
using namespace std;

// consider a situation where we have number uniformly distributed in range from 1 to 10^8. How do we sort efficiently.

// consider another situation where we have floating point numbers uniformly d istributed in range 0.0 to 1.0(excluded).

// linear time to scatter
// linear  time to sort buckets
// linear time to join sorted buckets

// might work bad if not uniform data
// O(n2) worst case

void bucketSort(int arr[], int n, int k)
{ // find max value
    int max_val = arr[0];
    for (int i = 0; i < n; i++)
        max_val = max(max_val, arr[i]);
    max_val++;
    vector<int> bkt[k];
    // fill buckets
    for (int i = 0; i < n; i++)
    {
        int bi = (k * arr[i]) / max_val;
        bkt[bi].push_back(arr[i]);
    }
    // sort buckets
    for (int i = 0; i < k; i++)
        sort(bkt[i].begin(), bkt[i].end());
    int index = 0;
    // join buckets
    for (int i = 0; i < k; i++)
        for (int j = 0; j < bkt[i].size(); j++)
            arr[index++] = bkt[i][j];
}

int main()
{
    int arr[] = {20, 80, 10, 85, 75, 99, 18};
    int k = 5; // buckets
    int n = 7;
    bucketSort(arr, n, k);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}

// Assuming k~=n
// Best case: data is uniformly distributed O(n)
// Worst case: all items go into single bucket:
// If we use insertion sort to sort the individual buckets, then O(n2).
// If we use O(nlogn) algo sort to sort the individual buckets, then O(nlogn).