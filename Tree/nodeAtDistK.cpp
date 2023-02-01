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

void printDist(Node *root, int k)
{
    if (root == NULL)
        return;
    if (k == 0)
    {
        cout << (rooot->key) << " ";
    }
    else
    {
        printDist(root->left, k - 1);
        printDist(root->right, k - 1);
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
