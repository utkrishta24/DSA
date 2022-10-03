#include <bits/stdc++.h>
using namespace std;

// naive : AS: O(n) and also equal to number over words
//  1. create a stack
//  2. push words into the stack one by one
//  3. pop words from the stack and append to output

// efficient: in place: AS: O(1)
void reverse(char str[], int low, int high)
{
    while (low <= high)
    {
        swap(str[low], str[high]);
        low++;
        high--;
    }
}

void reverseWords(char str[], int n)
{
    int start = 0;
    for (int end = 0; end < n; end++)
    {
        if (str[end] == ' ')
        {
            reverse(str, start, end - 1);
            start = end + 1;
        }
    }
    reverse(str, start, n - 1);
    reverse(str, 0, n - 1);
    cout << str;
}

int main()
{
    char str[] = "welcome to geeks";
    int n = sizeof(str) / sizeof(str[0]) - 1;
    reverseWords(str, n);
    return 0;
}
