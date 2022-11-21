#include <bits/stdc++.h>
using namespace std;

// naive: O(n3)
bool areDistinct(string s1, int i, int j)
{
    vector<bool> visited(256);
    for (int k = i; k <= j; k++)
    {
        if (visited[str[k]] == true)
            return false;
        visited[str[k]] = true;
    }
    return true;
}

int longestDist(string str)
{
    int n = str.length(), res = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (areDistinct(str, i, j))
                res = max(res, j - i + 1);
    return res;
}

// better: O(n2)

int longestDist2(string str)
{
    int n = str.size(), res = 0;
    for (int i = 0; i < n; i++)
    {
        vector<bool> visited(256);
        for (int j = 0; j < n; j++)
        {
            if (visited[str[j]] == true)
                break;
            else
            {
                res = max(res, j - i + 1);
                visited[str[i]] = true;
            }
        }
    }
    return res;
}

// efficient: O(n)
// compute maxEnd(j): length of the longest substring that has distinct characters and end with j

// a b c a d b d : string
// 1 2 3 3 4 4 2 : maxEnd(j)

// res =[ j=0 to n-1 ]max(maxEnd(j))
// maxEnd(j) = { maxEnd(j-1)+1     : if str[j] is not present in maxEnd(j-1)
//             { j-prev(str[j])+1  : where prev(str[j]) is previous index of the character str[j]

int longestDist3(string str)
{
    int n = str.length(), res = 0;
   vector<int> prev(256,-1);
   int i=0;
    for (int j = 0; j < n; j++)
    {
        i=max(i,prev[str[j]]+1);
        int maxEnd=j-i+1;
        res=max(res,maxEnd);
        prev[str[j]]=j;
    }
    return res;
}

int main()
{

    return 0;
}
