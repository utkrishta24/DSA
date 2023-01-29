#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};

struct MyStack
{
    Node *head;
    int sz;
    MyStack()
    {
        head = NULL;
        sz = 0;
    }
    void push(int x)
    {
        Node *temp = new Node(x);
        temp->next = head;
        head = temp;
        sz++;
    }
    int pop()
    {
        if (head == NULL)
            return INT_MIN;
        int res = head->data;
        Node *temp = head;
        head = head->next;
        delete (temp);
        sz--;
        return res;
    }
    int peak()
    {
        if (head == NULL)
            return INT_MIN;
        return head->data;
    }
    int size()
    {
        return sz;
    }
    bool isEmpty()
    {
        return (head == NULL);
    }
};

int main()
{
    MyStack s;
    s.push(5);
    s.push(15);
    s.push(25);
    cout << s.size() << endl;
    cout << s.peak() << endl;
    cout << s.pop() << endl;
    s.push(35);
    cout << s.peak() << endl;
    cout << s.isEmpty() << endl;
    return 0;
}
