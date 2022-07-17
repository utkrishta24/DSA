// Divide and conquer algo.
// stable
// 0(nlogn) time
// O(n) AS
//  well suited for linked list. works in O(1) AS.
// used in external sorting.
// in general for arrays, quick sort outperforms it.

#include <bits/stdc++.h>
using namespace std;

//................Merge Two Sorted arrays................

// naive
// O((m+n)*log(m+n))
// AS 0(m+n)
// void merge(int a[], int b[], int m, int n)
// {
//     int c[m + n];
//     for (int i = 0; i < m; i++)
//         c[i] = a[i];
//     for (int i = 0; i < n; i++)
//         c[m + i] = b[i];
//     sort(c, c + m + n);
//     for (int i = 0; i < m + n; i++)
//         cout << c[i] << " ";
// }

// efficient
// 0(m+n)
void merge(int a[], int b[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (a[i] <= b[j])
        {
            cout << a[i] << " ";
            i++;
        }
        else
        {
            cout << b[j] << " ";
            j++;
        }
    }
    while (i < m)
    {
        cout << a[i] << " ";
        i++;
    }
    while (j < n)
    {
        cout << b[j] << " ";
        j++;
    }
}

int main()
{
    int a[] = {2, 7, 8, 15};
    int b[] = {3, 15, 57, 89, 100};
    merge(a, b, 4, 5);
    return 0;
}
