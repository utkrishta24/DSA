// method 1 : divide the space in two halves

struct TwoStacks
{
    int *arr, cap, top1, top2;
    TwoStacks(int n)
    {
        cap = n;
        top1 = n / 2 + 1;
        top2 = n / 2;
        arr = new int[n];
    }
    void push1(int x)
    {
        if (top1 > 0)
        {
            top1--;
            arr[top1] = x;
        }
        else
        {
            cout << "Overflow" << endl;
            return;
        }
    }
    void push2(int x)
    {
        if (top1 < cap - 1)
        {
            top2++;
            arr[top2] = x;
        }
        else
        {
            cout << "Overflow" << endl;
            return;
        }
    }
    int pop1()
    {
        if (top1 <= cap / 2)
        {
            int x = arr[top1];
            top1++;
            return x;
        }
        else
        {
            cout << "Underflow" << endl;
            exit(1);
        }
    }
    int pop2()
    {
        if (top2 >= cap / 2 + 1)
        {
            int x = arr[top2];
            top2--;
            return x;
        }
        else
        {
            cout << "Underflow" << endl;
            exit(1);
        }
    }
};

// method 2: a space efficient implementation
#include <bits/stdc++.h>
using namespace std;

struct twoStackInArray
{
    int *arr, cap, top1, top2;
    twoStackInArray(int n)
    {
        cap = n;
        top1 = -1, top2 = cap;
        arr = new int[n];
    }
    void push1(int x)
    {
        if (top1 < top2 - 1)
        {
            top1++;
            arr[top1] = x;
        }
    }
    void push2(int x)
    {
        if (top1 < top2 - 1)
        {
            top2--;
            arr[top2] = x;
        }
    }
    int pop1()
    {
        if (top1 >= 0)
        {
            int x = arr[top1];
            top1--;
            return x;
        }
        else
        {
            exit(1);
        }
    }
    int pop2()
    {
        if (top2 < cap)
        {
            int x = arr[top2];
            top2++;
            return x;
        }
        else
        {
            exit(1);
        }
    }
};

int main()
{
    twoStackInArray ts(5);
    ts.push1(5);
    ts.push2(10);
    ts.push2(15);
    ts.push1(11);
    ts.push2(7);
    cout << "Popped element from stack1 is: " << ts.pop1() << endl;
    ts.push2(40);
    cout << "Popped element from stack2 is: " << ts.pop2() << endl;
    return 0;
}
