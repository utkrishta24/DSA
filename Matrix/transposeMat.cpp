#include <bits/stdc++.h>
using namespace std;

const int n = 2;
// naive
void naiveTanspose(int arr[n][n])
{
    int temp[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            temp[i][j] = arr[j][i];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            arr[i][j] = temp[i][j];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cout << arr[i][j] << " ";
}

// efficient //in place one traversal constant AS
void effTanspose(int arr[n][n])
{
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            swap(arr[i][j], arr[j][i]);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cout << arr[i][j] << " ";
}

int main()
{
    int arr[n][n] = {{10, 20},
                     {30, 40}};
    naiveTanspose(arr);
    effTanspose(arr);
    return 0;
}
