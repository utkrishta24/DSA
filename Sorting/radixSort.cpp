#include <bits/stdc++.h>
using namespace std;

// not a comparision based
// linear time if data is within limited range
//
void countingSort(int arr[], int n, int exp)
{
    int count[10];
    int output[n];
    for (int i = 0; i < 10; i++)
    {
        count[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        count[(arr[i] / exp) % 10]++;
    }
    for (int i = 1; i < 10; i++)
    {
        count[i] = count[i] + count[i - 1];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = output[i];
    }
}
void radixSort(int arr[], int n)
{
    int mx = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > mx)
            mx = arr[i];
    for (int exp = 1; mx / exp > 0; exp = exp * 10)
        countingSort(arr, n, exp);
}

int main()
{
    int arr[] = {319, 212, 6, 8, 100, 50};
    int n = 6;
    radixSort(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}