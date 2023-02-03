/*
Always insert at bottom
Insert in root only when tree empty
*/
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *left, *right;
    Node(int x)
    {
        key = x;
        left = right = NULL;
    }
};

// O(h)

// recursive
// AS O(h)
Node *insert(Node *root, int x)
{
    if (root == NULL)
        return new Node(x);
    else if (root->key < x)
        root->right = insert(root->right, x);
    else if (root->key > x)
        root->left = insert(root->left, x);
    return root;
}

// iterative
// AS O(1)
Node *i_insert(Node *root, int x)
{
    Node *temp = new Node(x);
    Node *parent = NULL, *curr = root;
    while (curr != NULL)
    {
        parent = curr;
        if (curr->key > x)
            curr = curr->left;
        else if (curr->key < x)
            curr = curr->right;
        else
            return root;
    }
    if (parent == NULL)
        return temp;
    if (parent->key > x)
        parent->left = temp;
    else
        parent->right = temp;
}

int main()
{

    return 0;
}
