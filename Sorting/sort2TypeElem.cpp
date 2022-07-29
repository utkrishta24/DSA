// Segregate negative and positive elements.
// Segregate even and odd elements.
// Sort a binary array.

#include <bits/stdc++.h>
using namespace std;

// naive 0(n) , AS 0(n)
void segregatePosNegNai(int arr[], int n)
{
    int temp[n], i = 0;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] < 0)
        {
            temp[i] = arr[j];
            i++;
        }
    }
    for (int j = 0; j < n; j++)
    {
        if (arr[j] >= 0)
        {
            temp[i] = arr[j];
            i++;
        }
    }
    for (int j = 0; j < n; j++)
        arr[j] = temp[j];
}

// efficient : this problem is mainly a variation of partition() of QuickSort: Hoare's or Lomuto's partition can solve this in 0(n) time and 0(1) AS

void segregatePosNeg(int arr[], int n)
{
    int i = -1, j = n;
    while (true)
    {
        do
        {
            i++;
        } while (arr[i] < 0);
        do
        {
            j--;
        } while (arr[j] >= 0);
        if (i >= j)
            return;
        swap(arr[i], arr[j]);
    }
}

int main()
{
    int arr[] = {13, -12, 18, -10};
    int n = 4;
    segregatePosNeg(arr, n);
    for (int j = 0; j < n; j++)
        cout << arr[j] << " ";
    return 0;
}
