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
int getMax(Node *root)
{
    if (root == NULL)
        return INT_MIN;
    else
        return max((root->key), max(getMax(root->left), getMax(root->right)));
}

// can alseo be iterative in level order using queue, it changes AS to O(W)

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    return 0;
}