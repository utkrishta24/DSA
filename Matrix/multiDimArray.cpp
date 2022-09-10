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

// variable sized
int main()
{
    int m = 3, n = 2;
    int arr[m][n];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            arr[i][j] = i + j;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cout << arr[i][j] << " " << endl;
    return 0;
}

// double pointer
int main()
{
    int m = 3, n = 2;
    int **arr;
    arr = new int *[m];
    for (int i = 0; i < m; i++)
        arr[i] = new int[n];
        // jagged array n can be omitted or made variable
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = 10;
            cout << arr[i][j] << " " << endl;
        }
    return 0;
}

// array of pointers
int main()
{
    int m = 3, n = 2;
    int *arr[m];
    for (int i = 0; i < m; i++)
        arr[i] = new int[n];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = 10;
            cout << arr[i][j] << " " << endl;
        }
    return 0;
}

// array of vectors
// not as cache friendly as simple 2D/
/ individual rows are of dynamic size
//easy to pass to a fucntion
int main()
{
    int m = 3, n = 2;
    vector<int> arr[m];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            arr[i].push_back(10);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " " << endl;
        }
    return 0;
}

// vectors of vectors
// not as cache friendly as simple 2D
// easy to pass to a fucntion
// no of rows can also be dyanmic
int main()
{
    int m = 3, n = 2;
    vector<vector<int>> arr;
    for (int i = 0; i < m; i++)
    {
        vector<int> v;
        for (int j = 0; j < n; j++)
            v.push_back(10);
        arr.push_back(v);
    }
    for (int i = 0; i < arr.size(); i++)
        for (int j = 0; j < arr.size(); j++)
        {
            cout << arr[i][j] << " " << endl;
        }
    return 0;
}