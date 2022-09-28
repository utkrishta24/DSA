#include <bits/stdc++.h>
using namespace std;
const int CHAR = 256;
// naive O(nlogn)
bool anagram(string s1, string s2)
{
    if (s1.length() != s2.length())
        return false;
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    return (s1 == s2);
}

// efficient O(n)
bool anagramEff(string s1, string s2)
{
    if (s1.length() != s2.length())
        return false;
    int count[CHAR] = {0};
    for (int i = 0; i < s1.length(); i++)
    {
       count[s1[i]]++;
       count[s2[i]]--; 
    }
     for (int i = 0; i < CHAR; i++){
        if(count[i]!=0)
            return false;
     }
     return true;
}

int main()
{
    string s1 = "geeksforgeeks";
    string s2 = "grges";
    cout << anagram(s1, s2) << endl;
    cout << anagramEff(s1, s2, s1.length(), s2.length());
    return 0;
}
