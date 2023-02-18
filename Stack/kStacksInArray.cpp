#include <bits/stdc++.h>
using namespace std;

struct kStack
{
    int *arr, cap, *top, *next, k, freetop;
    kStack(int k1, int n)
    {
        k = k1;
        cap = n;
        top = new int[k];
        next = new int[cap];
        arr = new int[cap];
        for (int i = 0; i < k; i++)
        {
            top[i] = -1;
        }
        freeTop = 0;
        for (int i = 0; i < cap - 1; i++)
        {
            next[i] = i + 1;
        }
        next[cap - 1] = -1;
    }
    bool isFull() { return (freeTop == -1); }
    bool isEmpty() { return (top[sn] == -1); }
    void push(int x, int sn)
    {
        if (isFull())
        {
            cout << "Underflow" << endl;
            return;
        }
        int i = freetop;
        freetop = next[i];
        next[i] = top[sn];
        top[sn] = i;
        arr[i] = x;
    }
    int pop(int sn)
    {
        if (isEmpty())
        {
            cout << "Underflow" << endl;
            return INT_MAX;
        }
        int i = top[sn];
        top[sn] = next[i];
        next[i] = freetop;
        freetop = i;
        return arr[i];
    }
};

int main()
{
    int k = 3, n = 10;
    kStacks ks(k, n);
    ks.push(15, 2);
    ks.push(45, 2);
    ks.push(17, 1);
    ks.push(49, 1);
    ks.push(39, 1);
    ks.push(11, 0);
    ks.push(9, 0);
    ks.push(7, 0);
    cout << "Popped element from stack 2 is " << ks.pop(2) << endl;
    cout << "Popped element from stack 1 is " << ks.pop(1) << endl;
    cout << "Popped element from stack 0 is " << ks.pop(0) << endl;
    return 0;
}
