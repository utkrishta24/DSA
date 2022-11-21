#include <bits/stdc++.h>
using namespace std;
// worst case: O(n*n!) : pen paper solution.. find each permutations and if matches return count+1 else count++

// for efficient: count lexographically smallest strings + 1

// for distinct chars but can be extended for duplicates as well
// O(n)
// or O(char + n + char + n*char)

const int CHAR = 256;

int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * fact(n - 1);
}

int lexRank(string &str)
{
    int res = 1;
    int n = str.length();
    int mul = fact(n);
    int count[CHAR] = {0};
    for (int i = 0; i < n; i++)
    {
        count[str[i]]++;
    }

    for (int i = 1; i < CHAR; i++)
    {
        count[i] += count[i - 1];
    }

    for (int i = 0; i < n - 1; i++)
    {
        mul = mul / (n - i);
        res = res + count[str[i] - 1] * mul;
        for (int j = str[i]; j < CHAR; j++)
        {
            count[j]--;
        }
    }
    return res;
}

int main()
{
    string str = "STRING";
    cout << "Rank=" << lexRank(str);
    return 0;
}
