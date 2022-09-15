// first row should be printed from left to right, second row from right to left, and so on

#include <bits/stdc++.h>
using namespace std;
const int R = 3;
const int C = 2;
// 0(R*C)
void printSnake(int arr[R][C])
{
    for (int i = 0; i < R; i++)
    {
        if (i % 2 == 0)
            for (int j = 0; j < C; j++)
            {
                cout << arr[i][j] << " ";
            }
        else
        {
            for (int j = C - 1; j >= 0; j--)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
}

int main()
{
    int arr[R][C] = {{10, 20},
                     {30, 40},
                     {50, 60}};
    printSnake(arr);
    return 0;
}
