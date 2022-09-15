#include <bits/stdc++.h>
using namespace std;

const int n = 3;
// naive // O(r*c)
void naiveSearch(int arr[n][n], int x)
{

    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            if (arr[i][j] == x)
            {
                cout << i << " " << j;
                return;
            }
        }
    }
    cout << -1;
}
// efficient //O(r+c)
// begin from top right corner
// if x is same, print position and return
// if x is smaller move left
// if x is greater move down

// why top right? ==> we can also use bottom left
// not others because confusion to wether go sideways or updown
// i<r
// j=c-1
// to optimize: is x is smaller than top left then -1
// to optimize: is x is greater than bottom right then -1

void effSearch(int arr[n][n], int x)
{
    int i = 0, j = n - 1;
    while (i < n && j >= 0)
    {
        if (arr[i][j] == x)
        {
            cout << i << " " << j;
            return;
        }
        else if (arr[i][j] > x)
        {
            j--;
        }
        else
            j++;
    }

    cout << -1;
}

int main()
{
    int arr[n][n] = {{10, 20, 30},
                     {30, 40, 50},
                     {50, 60, 70}};
    int x = 40;
    naiveSearch(arr, x);
    effSearch(arr, x);

    return 0;
}
