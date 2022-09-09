/*
1. elements are stored in row-major order
2. internal curly brackets are optional
3. only the first dimension can be omitted when we initialize
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3][2] = {{10, 20},
                     {30, 40},
                     {50, 60}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << arr[i][j] << " ";
        }
    }
    return 0;
}
