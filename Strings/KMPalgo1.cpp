#include <bits/stdc++.h>
using namespace std;
// Constructing LPS Array

// naive : O(n^3)
int longPropPreSuff(string str, int n)
{
    for (int len = n - 1; len > 0; len--)
    {
        bool flag = true;
        for (int i = 0; i < len; i++)
            if (str[i] != str[n - len + i])
                flag = false;
        if (flag == true)
            return len;
    }
    return 0;
}
void naive_fillLPS(string str, int *lps)
{
    for (int i = 0; i < str.length(); i++)
        lps[i] = longPropPreSuff(str, i + 1);
}

// efficient: O(n)
//  1. if len=lps[i-1] and str[len] and str[i] are same, then lps[i]=len+1, len++
//  2. if str[i] and str[len] are not same:
//  a) if len=0, then lps[i]=0
//  b) else, we recursively apply lps[],then len=lps[len-1] and compare str[i] with str[len]

void fillLPS(string str, int *lps)
{
    int n = str.length(), len = 0;
    lps[0] = 0;
    int i = 1;
    while (i < n)
    {
        if (str[i] == str[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else
        {
            if (len == 0)
            {
                lps[i] = 0;
                i++;
            }
            else
            {
                len = lps[len - 1];
            }
        }
    }
}

int main()
{
    string txt = "abacabad";
    int lps[txt.length()];
    fillLPS(txt, lps);
    for (int i = 0; i < txt.length(); i++)
    {
        cout << lps[i] << " ";
    }
    return 0;
}
