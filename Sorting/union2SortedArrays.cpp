#include <bits/stdc++.h>
using namespace std;

// naive O((m+n)*log(m+n))
void unionNai(int a[], int b[], int m, int n)
{
    int c[m + n];
    for (int i = 0; i < m; i++)
        c[i] = a[i];
    for (int j = 0; j < n; j++)
        c[m + j] = b[j];
    sort(c, c + m + n);
    for (int i = 0; i < m + n; i++)
        if (i == 0 || c[i] != c[i - 1])
            cout << c[i] << " ";
}

// efficient 0(m + n) //merge function use
void unionEff(int a[], int b[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (i > 0 && a[i] == a[i - 1])
        {
            i++;
            continue;
        }
        if (j > 0 && b[j] == b[j - 1])
        {
            j++;
            continue;
        }
        if (a[i] < b[j])
        {
            cout << a[i] << " ";
            i++;
        }
        else if (a[i] > b[j])
        {
            cout << b[j] << " ";
            j++;
        }
        else
        {
            cout << a[i] << " ";
            i++;
            j++;
        }
    }
    while (i < m)
        if (i == 0 || a[i] != a[i - 1])
        {
            cout << a[i] << " ";
            i++;
        }
    while (j < n)
        if (j == 0 || b[j] != b[j - 1])
        {
            cout << b[j] << " ";
            j++;
        }
}

int main()
{
    int a[] = {3, 5, 10, 10, 10, 10, 15, 15, 20};
    int b[] = {5, 10, 10, 10, 15, 30};
    int m = 9;
    int n = 6;
    unionNai(a, b, m, n);
    cout << "\n";
    unionEff(a, b, m, n);
    return 0;
}
