/*
Fractional Knapsack:
// O(nlogn)
1. calculate ratio (value/weight) for ebery item.
2. sort all item in decreasing order of the ratio.
3. initialize res=0, curr_cap=given_cap
4. do following for every item I in sorted order:
        a. else if(i.weight<=curr_cap)
            {
                curr_cap-=I.weight;
                res+=I.value;
            }
        b.else
            {
                res+=(I.value)*(curr_cap/I.weight);
                return res;
            }
5. return res;
*/

#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    double r1 = (double)a.first / a.second;
    double r2 = (double)b.first / b.second;
    return r1 > r2;
}

double fKnapsack(int W, pair<int, int> arr[], int n)
{
    sort(arr, arr + n, cmp);
    double res = 0.0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i].second <= N)
        {
            res += arr[i].first;
            W = W - arr[i].second;
        }
        else
        {
            res += arr[i].first * ((double)W / arr[i].second);
            break;
        }
    }
    return res;
}

int main()
{
    pair<int, int> arr[] = {make_pair(120, 30), make_pair(100, 20), make_pair(60, 10)};
    int n = 3, W = 50;
    cout << fKnapsack(W, arr, n);
    return 0;
}
