// Generate numbers with given digits
// Given a number n, print first n number(in increasing order) such that all these numbers have digits in set {5, 6}

#include <bits/stdc++.h>
using namespace std;

void printFirstN(int n)
{
    queue<int> q;
    q.push("5");
    q.push("6");
    for (int count = 0; count < n; count++)
    {
        string curr = q.front();
        cout << cur << " ";
        q.pop();
        q.push(curr + "5");
        q.push(curr + "6");
    }
}

int main()
{
    int n = 5;
    printFirstN(n);
}
