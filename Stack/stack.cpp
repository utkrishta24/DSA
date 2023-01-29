/*
LIFO operations
insert: push()
delete: pop()
empty or not: isEmpty()
top: peek()
size: size()
underflow: pop or peek on empty stack
overflow: push on full stack
*/

// Applications:
// Function Calls
// Balanced parathesis
// Reversing Items
// Infix to Postfix/Prefix
// Evaluation of Postfix/Prefix
// Stock span Problem
// Undo/Redo or forward/backward

#include <bits/stdc++.h>
using namespace std;
// using Array
// problem with array :
// does not handle overflow
// need to provide capacity initially.
struct myStack
{
    int *arr;
    int cap;
    int top;
    myStack(int c)
    {
        cap = c;
        arr = new int[cap];
        top = -1;
    }
    void push(int x)
    {
        if (top == cap - 1)
        {
            cout << "Full" << endl;
            return;
        }
        top++;
        arr[top] = x;
    }
    int pop()
    {
        if (top == -1)
        {
            cout << "Empty" << endl;
            return INT_MIN;
        }
        int res = arr[top];
        top--;
        return res;
    }
    int peek()
    {
        if (top == -1)
        {
            cout << "Empty" << endl;
            return INT_MIN;
        }
        return arr[top];
    }
    int size()
    {
        return top + 1;
    }
    bool isEmpty()
    {
        return (top == -1);
    }
};

// using Vector
struct MyStack
{
    vector<int> v;
    void push(int x)
    {
        v.push_back(x);
    }
    int pop()
    {
        int res = v.back();
        v.pop_back();
        return res;
    }
    int peek()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool isEmpty()
    {
        return v.empty();
    }
};

int main()
{
    MyStack s;
    s.push(5);
    s.push(15);
    s.push(25);
    cout << s.size() << endl;
    cout << s.peek() << endl;
    cout << s.pop() << endl;
    s.push(35);
    cout << s.peek() << endl;
    cout << s.isEmpty() << endl;
    return 0;
}
