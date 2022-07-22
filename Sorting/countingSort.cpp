#include <bits/stdc++.h>
using namespace std;

// non-comparision
// O(n+k) time to sort n elements in 0 to k-1
// small intergral arrays
// useful when k is linear in terms of n
// sort students using marks
// naive
void countingSort(int arr[], int n, int k)
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
// problems: cannot be used as a general purpose algorithm for sorting objects with multiple members, like sorting an array of students by marks.
// general purpose implementation:
// stable
// not a comparision based algo
// 0(n+k) time
// 0(n+k) as
// used as a subroutine in radix sort
// exercise: extend the given implementation to work for an arbitrary range of size k

void countingGPI(int arr[], int n, int k)
{
    int count[k];
    for (int i = 0; i < k; i++)
        count[i] = 0;
    for (int i = 0; i < n; i++)
        count[arr[i]]++;

    for (int i = 1; i < k; i++)
        count[i] = count[i - 1] + count[i];

    int output[n];
    for (int i = n - 1; i >= 0; i--)
    {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    for (int i = 0; i < n; i++)
        arr[i] = output[i];
}

int main()
{
    int arr[] = {1, 4, 4, 1, 0, 1};
    int k = 5;
    int n = 6;
    countingGPI(arr, n, k);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}