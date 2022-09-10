#include <bits/stdc++.h>
using namespace std;

// problem 1: fixed  3x2
void display1(int arr[3][2])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << arr[i][j] << " ";
        }
    }
}

// problem 2: any matrix with two columns
void display2(int arr[][2], int m)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << arr[i][j] << " ";
        }
    }
}

// problem 3: any matrix dimensions but fixed R and C
const int R = 3;
const int C = 2;
void display3(int arr[R][C])
{
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cout << arr[i][j] << " ";
        }
    }
}

// problem 4: any matrix dimensions
// solution: double pointers
void display4(int **arr, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
    }
}
int main()
{
    int **arr;
    int m = 3, n = 2;
    arr = new int *[m];
    for (int i = 0; i < m; i++)
        arr[i] = new int[n];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = i;
            cout << arr[i][j] << " " << endl;
        }
    display4(arr, m, n);
    return 0;
}

// problem 4: any matrix dimensions
// solution: array of pointers
void display5(int *arr[], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
    }
}
int main()
{
    int m = 3, n = 2;
    int *arr[m];
    for (int i = 0; i < m; i++)
    {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = i;
            cout << arr[i][j] << " " << endl;
        }
    }
    display5(arr, m, n);
    return 0;
}

// problem 4: any matrix dimensions
// solution: array of vectors
void display6(vector <int> arr[], int m)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            cout << arr[i][j] << " ";
        }
    }
}
int main()
{
    int m = 3, n = 2;
    vector <int> arr[m];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i].push_back(i);
        }
    }
    display6(arr,m);
    return 0;
}

// problem 4: any matrix dimensions
// solution: vector  of vectors
void display7(vector <vector <int>> &arr)
{
    for (int i = 0; i < arr[i].size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
    }
}
int main()
{
    int m = 3, n = 2;
    vector <vector <int>> arr;
    for (int i = 0; i < m; i++)
    {   
        vector <int> v;
        for (int j = 0; j < n; j++)
        {   
            v.push_back(i);
        }
        arr.push_back(v);
    }
    display7(arr);
    return 0;
}