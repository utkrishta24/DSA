#include <bits/stdc++.h>
using namespace std;

// naive O(m*n)
void intersect(int a[], int b[], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        if (i > 0 && a[i] == a[i - 1])
            continue;
        for (int j = 0; j < n; j++)
        {
            if (a[i] == b[j])
            {
                cout << a[i] << " ";
                break;
            }
        }
    }
}

// efficient 0(m + n) //merge function use
void intersectEff(int a[], int b[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (i > 0 && a[i] == a[i - 1])
        {
            i++;
            continue;
        }
        if (a[i] < b[j])
        {
            i++;
        }
        else if (a[i] > b[j])
        {
            j++;
        }
        else
        {
            cout << a[i] << " ";
            i++;
            j++;
        }
    }
}

int main()
{
    int a[] = {3, 5, 10, 10, 10, 10, 15, 15, 20};
    int b[] = {5, 10, 10, 10, 15, 30};
    int m = 9;
    int n = 6;
    intersect(a, b, m, n);
    cout << "\n";
    intersectEff(a, b, m, n);
    return 0;
}
