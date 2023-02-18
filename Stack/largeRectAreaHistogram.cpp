#include <bits/stdc++.h>
using namespace std;
// naive: 0(n2)
int naiveArea(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int curr = arr[i];
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[j] >= arr[i])
                curr += arr[i];
            else
                break;
        }
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] >= arr[i])
                curr += arr[i];
            else
                break;
        }
        res = max(res, curr);
    }
    return res;
}
// better: O(n)
/*
1. initialize res: 0
2. find prev smaller elem for every elem
3. find next smaller elem for every elem
4. do following for every element arr[i]
        curr=arr[i]
        curr+=(i-ps[i]-1)*arr[i]
        curr+=(ns[i]-i-1)*arr[i]
        res=max(res,curr)
5. return res
*/
int betterArea(int arr[], int n)
{
    int res = 0;
    int ps[n], ns[n];
    stack<int> s;
    s.push(0);
    for (int i = 0; i < n; i++)
    {
        while (s.empty() == false && arr[s.top()] >= arr[i])
            s.pop();
        int pse = s.empty() ? -1 : s.top();
        ps[i] = pse;
        s.push(i);
    }
    while (s.empty() == false)
    {
        s.pop();
    }
    s.push(n - 1);
    for (int i = n - 1; i > 0; i--)
    {
        while (s.empty() == false && arr[s.top()] >= arr[i])
            s.pop();
        int nse = s.empty() ? n : s.top();
        ns[i] = nse;
        s.push(i);
    }
    for (int i = 0; i < n; i++)
    {
        int curr = arr[i];
        curr += (i - ps[i] - 1) * arr[i];
        curr += (ns[i] - i - 1) * arr[i];
        res = max(res, curr);
    }
    return res;
}

// best:
/*
1. create a stack s
2. int res=0
3. for(int i=0;i<n;i++)
    {
        while(s.empty()==false && arr[s.top()]>=arr[i])
        {
            tp=s.pop();
            curr=arr[tp]*(s.empty()?i:(i-s.top()-1));
            res=max(res,curr);
        }
        s.push(i);
    }
    while(s.empty()==false)
    {
        tp=s.pop();
        curr=arr[tp]*(s.empty()?i:(n-s.top()-1));
        res=max(res,curr);
    }
    return res;
*/
int getMaxArea(int arr[], int n)
{
    stack<int> s;
    int res = 0;
    int tp;
    int curr;
    for (int i = 0; i < n; i++)
    {
        while (s.empty() == false && arr[s.top()] >= arr[i])
        {
            tp = s.top();
            s.pop();
            curr = arr[tp] * (s.empty() ? i : i - s.top() - 1);
            res = max(res, curr);
        }
        s.push(i);
    }
    while (s.empty() == false)
    {
        tp = s.top();
        s.pop();
        curr = arr[tp] * (s.empty() ? n : n - s.top() - 1);
        res = max(res, curr);
    }
    return res;
}

int main()
{
    int arr[] = {6, 2, 5, 4, 1, 5, 6};
    int n = 7;
    cout << "Maximum Area: " << getMaxArea(arr, n);
    return 0;
}
