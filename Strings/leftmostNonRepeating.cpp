#include <bits/stdc++.h>
using namespace std;

const int CHAR = 256;

// naive O(n2)
int naive_leftNonRepeated(string &str)
{
    for (int i = 0; i < str.length(); i++)
    {
        bool flag = false;
        for (int j = 0; j < str.length(); j++)
        {
            if (i != j && str[i] == str[j])
            {
                flag = true;
                break;
            }
        }
        if (flag == false)
            return i;
    }
    return -1;
}

// better O(n) two traversals
int better_leftNonRepeated(string &str)
{
    int count[CHAR] = {0};
    for (int i = 0; i < str.length(); i++)
    {
        count[str[i]]++;
    }
    for (int i = 0; i < str.length(); i++)
        if (count[str[i]] == 1)
            return i;
    return -1;
}

// efficient 0(n+CHAR)
// AS 0(CHAR) one traverse
int eff1_leftNonRepeated(string &str)
{
    int fI[CHAR];
    fill(fI, fI + CHAR, -1);
    for (int i = 0; i < str.length(); i++)
    {
        
        if (fI[str[i]] == -1)
            fI[str[i]] = i;
        else
            fI[str[i]] = -2;;
    }
    int res=INT_MAX;
    for (int i = 0; i < CHAR; i++)
        if(fI[i]>=0)
            res=min(res,fI[i]);
    
    return (res == INT_MAX) ? -1 : res;
}

int main()
{
    string str = "geeksforgeeks";
    cout << str[naive_leftNonRepeated(str)] << endl;  // naive
    cout << str[better_leftNonRepeated(str)] << endl; // better
    cout << str[eff1_leftNonRepeated(str)] << endl;   // eff
    return 0;
}
