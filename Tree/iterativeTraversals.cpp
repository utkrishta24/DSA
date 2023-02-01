#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *left;
    Node *right;
    Node(int k)
    {
        key = k;
        left = right = NULL;
    }
};
// O(n)
// AS O(h)
void inorder(Node *root)
{
    stack<Node *> s;
    Node *curr = root;
    while (curr != NULL || s.empty() == false)
    {
        while (curr != NULL)
        {
            s.push(curr);
            curr = curr->left;
        }
        curr = s.top();
        s.pop();
        cout << (curr->key) << " ";
        curr = curr->right;
    }
}

// simple
// O(n)
// AS O(n)
void preorder(Node *root)
{
    if (root == NULL)
        return;
    stack<Node *> s;
    s.push(root);
    while (s.empty() == false)
    {
        Node *curr = st.top();
        cout << (curr->key) << " ";
        s.pop();
        if (curr->right != NULL)
            s.push(curr->right);
        if (curr->left != NULL)
            s.push(curr->left);
    }
}

// optimized
// O(n)
// AS O(h)
void preorderOpti(Node *root)
{
    if (root == NULL)
        return;
    stack<Node *> s;
    Node *curr = root;
    while (curr != NULL || s.empty() == false)
    {
        while (curr != NULL)
        {
            cout << (curr->key) << " ";
            if (curr->right != NULL)
                s.push(curr->right);
            curr = curr->left;
        }
        if (s.empty() == false)
        {
            curr = s.top();
            s.pop();
        }
    }
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    return 0;
}
