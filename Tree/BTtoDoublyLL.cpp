#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    struct Node *left;
    struct Node *right;
    Node(int k)
    {
        key = k;
        left = right = NULL;
    }
};

void printlist(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->key << " ";
        curr = curr->right;
    }
    cout << endl;
}
//inorder tarversal O(n) AS O(h)
Node *BTToDLL(Node *root)
{
    if (root == NULL)
        return root;
    static Node *prev = NULL;
    Node *head = BTToDLL(root->left); // left
    if (prev == NULL)                 // current
    {
        head = root;
    }
    else
    {
        root->left = prev;
        prev->right = root;
    }
    prev = root;
    BTToDLL(root->right); // right
    return head;
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(20);
    root->right->left = new Node(30);
    root->right->right = new Node(35);
    Node *head = BTToDLL(root);
    printlist(head);
    return 0;
}
