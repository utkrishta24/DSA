#include <bits/stdc++.h>
using namespace std;

struct stackUsingQueue
{
    queue<int> q1, q2;
    int top() { return q1.front(); }
    int size() { return q1.size(); }
    int pop() { return q1.front(); }
    void push()
    {
        while (q1.empty() == false)
        {
            q2.push(q1.top());
            q1.pop();
        }
        while (q2.empty() == false)
        {
            q1.push(q2.top())
                q2.pop();
        }
    }
};

int main()
{

    stackUsingQueue s;
    s.push(10);
    s.push(5);
    s.push(15);
    s.push(20);
    cout << "current size: " << s.size() << endl;
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    cout << "current size: " << s.size() << endl;
    return 0;
    return 0;
}

/*
more variations:
    1. implement stack using queues by making pop operation costly;
    2. implement stack using only one queue (we use recursive call stack here)
    3. implement queue using stack
        ->by making enque() op costly
        ->by making deque() op costly
        ->by using one stack(and one recursion call stack)


*/