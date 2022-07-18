#include <bits/stdc++.h>
using namespace std;

//O(n)
//AS for recursive is O(n)

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

// iterative
int searchIterative(Node *head, int x)
{
    int pos = 1;
    Node *curr = head;
    while (curr != NULL)
    {
        if (curr->data == x)
        {
            return pos;
        }
        else
        {
            pos++;
            curr = curr->next;
        }
    }
    return -1;
}

// recursive
int searchRecursive(Node *head, int x)
{
    int pos = 1;
    if (head == NULL)
        return -1;
    if (head->data == x)
        return 1;
    else
    {
        int res = searchRecursive(head->next, x);
        if (res == -1)
            return -1;
        else
            return (res + 1);
    }
}
int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    int x = 50;
    cout << "Position: " << searchIterative(head, x);
    cout << "\nPosition: " << searchRecursive(head, x);
    return 0;
}