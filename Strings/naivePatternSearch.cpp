// Naive O((n-m+1)*m)
// AS : O(1)
//work for all kinf of patterns repeated or distinct

#include <bits/stdc++.h>
using namespace std;

void pattSearching(string &txt, string &pat)
{
    int n = txt.length();
    int m = pat.length();
    for (int i = 0; i <= n - m; i++)
    {
        int j;
        for (j = 0; j < m; j++)
        {
            if (pat[j] != txt[i + j])
                break;
        }
        if (j == m)
            cout << i << " ";
    }
}

int main()
{
    string txt = "geeksforgeeks";
    string pat = "eek";
    pattSearching(txt, pat);
    return 0;
}
