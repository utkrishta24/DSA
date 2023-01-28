#include <bits/stdc++.h>
using namespace std;
const int CHAR = 256;
bool isAnagram(string &p, string &t, int i)
{
    int count[CHAR] = {0};
    for (int j = 0; j < p.length(); j++)
    {
        count[p[j]]++;
        count[t[i + j]]--;
    }
    for (int j = 0; j < CHAR; j++)
    {
        if (count[j] != 0)
            return false;
    }
    return true;
}
// naive O((n-m+1)*m)
bool anagramPresent(string &t, string &p)
{
    int n = t.length();
    int m = p.length();
    for (int i = 0; i <= n - m; i++)
    {
        if (isAnagram(p, t, i))
            return true;
    }
    return false;
}

// efficient O(m + (n-m)*CHAR) m<n

bool areSame(int CT[], int CP[])
{
    for (int i = 0; i < CHAR; i++)
    {
        if (CT[i] != CP[i])
            return false;
    }
    return true;
}
bool presentEff(string &t, string &p)
{
    int CT[CHAR] = {0};
    int CP[CHAR] = {0};
    int n = t.length();
    int m = p.length();
    for (int i = 0; i < m; i++)
    {
        CT[t[i]]++;
        CP[p[i]]++;
    }
    for (int i = m; i < n; i++)
    {
        if (areSame(CT, CP))
            return true;
        CT[t[i]]++;
        CT[t[i - m]]--;
    }

    return false;
}
int main()
{
    string t = "geeksforgeeks";
    string p = "frog";
    cout << presentEff(t, p);
    return 0;
}
