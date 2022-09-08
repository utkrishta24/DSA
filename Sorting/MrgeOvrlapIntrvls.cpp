// Merge overlapping intervals
// I/P:{{1,3},{2,4},{5,7},{6,8},}
// O/P:{{1,4},{5,8}}

// to find whether two intervals overlap or not:
// take larger of the start values and see if it lies in the other interval

#include <bits/stdc++.h>
using namespace std;

struct Interval
{
    int start;
    int end;
};

// naive: O(n3)
// start = min(i1.start, i2.start)
// end = max(i1.end, i2.end)

// efficient : O(nlogn)
// sort by start time in increasing order ->
// or
// sort by end time in decreasing order

//sorted: x1,x2,x3,x4.....xi-1,xi -> mergerd: m1,m2,m3,m4...mj-1,mj
   