#include <bits/stdc++.h>
using namespace std;
// 2^n subsequences
// checking each O(2^n * n)

// O(n+m)
// iterative AS O(1)
bool checkSubsequence(string s1, string s2)
{
    int n = s1.length();
    int m = s2.length();
    int j = 0;
    for (int i = 0; i < n && j < m; i++)
    {
        if (s1[i] == s2[j])
            j++;
    }
    return (j == m);
}
// recursive AS O(m+n)
bool isSubsequence(string s1, string s2, int n, int m)
{
    if (m == 0)
        return true;
    if (n == 0)
        return false;
    if (s1[n - 1] == s2[m - 1])
        return checkSubsequence(s1, s2, n - 1, m - 1);
    else
        return checkSubsequence(s1, s2, n - 1, m);
}

int main()
{
    string s1 = "abcd";
    string s2 = "ad";
    cout << checkSubsequence(s1, s2);
    return 0;
}
