// maximum no. of activities that can happen on a single tasking machine

#include <bits/stdc++.h>
using namespace std;

// naive: consider every activity as first and then count max that can be done

// efficient: greedy
/*
1. sort according to finish time
2. initialize solution as first activity
3. do following for removing activities:
    a.if current activity overlaps with last picked activity in the solution, ignore the current activity
    b.else add the current activity to the solution
// O(nlogn)
*/

void cmp(pair<int, int> a, pair<int, int> b)
{
    return (a.second < b.second);
}

int maxActivities(pair<int, int> arr[], int n)
{
    sort(arr, arr + n, cmp);
    int prev = 0;
    int res = 1;
    for (int curr = 1; curr < n; i++)
    {
        if (arr[curr].first >= arr[prev].second)
        {
            res++;
            prev = curr;
        }
    }
    return res;
}

int main()
{
    pair<int, int> arr[] = {make_pair(12, 25), make_pair(10, 20), make_pair(20, 30)};
    int n = 3;
    cout << maxActivities(arr, n);
    return 0;
}
