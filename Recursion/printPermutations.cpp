// O()

#include <bits/stdc++.h>
using namespace std;
void permute(string str, int i, int j)
{
    if (i == j - 1)
    {
        cout << str << endl;
        return;
    }
    else
    {
        for (int k = i; k <= j - 1; k++)
        {
            swap(str[i], str[k]);
            permute(str, i + 1, j);
            swap(str[i], str[k]);
        }
    }
}
int main()
{
    string str = "ABC";
    int n = str.length();
    permute(str, 0, n);
    return 0;
}
