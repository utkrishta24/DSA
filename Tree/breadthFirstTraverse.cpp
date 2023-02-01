/*
    Breadth First (or Level Order)
*/

// DFS: recursively
// traverse: Root, Left Subtree, Right Subtree

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
/*
using : int height(Node *root)
        &
        void printDist(Node *root, int k)
O(n*h)
*/

// 0(n)
// AS O(n) if balanced
//    0(1) if skewed

// AS in generalL (0(W)) W>Width

void printLevel(Node *root)
{
    if (root == NULL)
        return;
    queue<Node *> q;
    q.push(root);
    while (q.empty() == false)
    {
        Node *curr = q.front();
        q.pop();
        cout << (curr->key) << " ";
        if (curr->left != NULL)
            q.push(curr->left);
        if (curr->right != NULL)
            q.push(curr->right);
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
