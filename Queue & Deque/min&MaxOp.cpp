/*
Designing a data structure that supports the following operations in O(1) time.
1) Get Minimum
2) Get Maximum
3) Insert Minimum
4) Insert Maximum
5) Delete Minimum
6) Delete Maximum
*/
#include <bits/stdc++.h>
using namespace std;

struct myDS
{
    deque<int> dq;
    void insertMin(int x) { dq.push_front(x); }
    void insertMax(int x) { dq.push_back(x); }
    int getMin() { return dq.front(); }
    int getMax() { return dq.back(); }
    int extractMin() { return dq.pop_front(); }
    int extractMax() { return dq.pop_back(); }
};

int main()
{
    int;
    return 0;
}