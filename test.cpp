#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {6, 6, 3, 9, 3, 5, 1};
    int n = sizeof(a) / sizeof(a[0]);
    int k = 12;
    int start = 0, end = n - 1;
    sort(a, a + n);
    while (start < end)
    {
        if (a[start] + a[end] == k)
        {
            cout << "(" << a[start] << "," << a[end] << ")"
                 << endl;
            while (a[start] == a[start + 1])
                start++;
            while (a[end - 1] == a[end])
                end--;
            start++;
            end--;
        }
        if (a[start] + a[end] < k)
            start++;
        else if (a[start] + a[end] > k)
            end--;
    }
    return 0;
}
