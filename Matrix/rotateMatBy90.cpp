#include <bits/stdc++.h>
using namespace std;

const int n = 3;
// naive 0(n2)
// AS:0(n2)
// last column becomes first row
// second last column becomes second row
void naiveRotate(int arr[n][n])
{
    int temp[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            temp[n - j - 1][i] = arr[i][j];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            arr[i][j] = temp[i][j];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cout << arr[i][j] << " ";
}

// efficient //0(n2)
// AS 0(1)
// first transpose
// reverse individual columns
void effRotate(int arr[n][n])
{
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            swap(arr[i][j], arr[j][i]);

    for (int i = 0; i < n; i++)
    {
        int low = 0, high = n - 1;
        while (low < high)
        {
            swap(arr[low][i], arr[high][i]);
              low++;
	        high--;
        }
    }

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cout << arr[i][j] << " ";
}

int main()
{
    int arr[n][n] = {{10, 20, 30},
                     {30, 40, 50},
                     {50, 60, 70}};
    // naiveRotate(arr);
    effRotate(arr);
    return 0;
}
