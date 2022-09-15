#include <bits/stdc++.h>
using namespace std;

const int n = 3;
// bottom r-1
// right c-1
// 0(r*c)
void Spiral(int arr[n][n])
{
    int top = 0, left = 0, bottom = n - 1, right = n - 1;
    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; i++)
            cout << arr[top][i] << " ";
        top++;
        for (int i = top; i <= bottom; i++)
            cout << arr[i][right] << " ";
        right--;
        if (top <= bottom)
              for (int i = right; i >= left; i--)
                cout<<arr[bottom][i]<<" ";
        bottom--;
        if (left <= right)
              for (int i = bottom; i >= top; i--)
                cout<<arr[i][left]<<" ";
        left++;
    }
}

int main()
{
    int arr[n][n] = {{10, 20, 30},
                     {30, 40, 50},
                     {50, 60, 70}};
    Spiral(arr);
    return 0;
}
