// Check if a String is Subsequence of Other

#include <bits/stdc++.h>
using namespace std;
// total no  of substrings in a string of n length is 2^n

// naive 2^n substrings finding TC is O(2^n * n)

// iterative
//  TS: O(n+m)
//  AS: O(1)
bool check(string s1, string s2)
{
    int i = 0, j = 0;
    // optimazation
    if (s1.length() < s2.length())
        return false;
    while (i < s1.length() && j < s2.length())
    {
        if (s1[i] == s2[j])
        {
            i++;
            j++;
        }
        else
            i++;
    }
    return (j == s2.length());
}

// recursive
// TC: O(m+n)
// AS: O(m+n)
bool checkRec(string s1, string s2, int m, int n)
{
    if (m == 0)
        return true;
    if (n == 0)
        return false;
    if (s1[n - 1] == s2[m - 1])
        return checkRec(s1, s2, n - 1, m - 1);
    else
        return checkRec(s1, s2, n - 1, m);
}
int main()
{
    string s1 = "geeksforgeeks";
    string s2 = "grges";
    cout << check(s1, s2)<<endl;
    cout << checkRec(s1, s2, s1.length(), s2.length());

    return 0;
}
