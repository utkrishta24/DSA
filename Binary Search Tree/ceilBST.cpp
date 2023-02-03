/*
 equal or nearest greater
 naive: O(n)
        AS recursive or stack based O(h)
 efficient:
            O(h)
            AS O(1)
            we initialize result as NULL and traverse from root to leaf using these steps:
            1. if root's key is same as x, return root
            2. if root's key is smaller, then change root to root's right
            3. if root's key is greater, update result as root and change root to root's  left
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
Node *ceil(Node *root, int x)
{
    Node *res = NULL;
    while (root != NULL)
    {
        if (root->key == x)
            return root;
        else if (root->key < x)
            root = root->right;
        else
        {
            res = root;
            root = root->left;
        }
    }
    return res;
}

int main()
{

    Node *root = new Node(15);
    root->left = new Node(5);
    root->left->left = new Node(3);
    root->right = new Node(20);
    root->right->left = new Node(18);
    root->right->left->left = new Node(16);
    root->right->right = new Node(80);
    int x = 17;

    cout << "Ceil: " << (ceil(root, 17)->key);
}
