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

// method 1: recursive O(n), AS 0(h)
int maxLevel = 0;
void LeftView(Node *root, int level)
{
    if (root == NULL)
        return;
    if (maxLevel < level)
    {
        cout << (root->key) < " ";
        maxLevel = level;
    }
    LeftView(root->left, level + 1);
    LeftView(root->right, level + 1);
}
void printLeftView(Node *root)
{
    LeftView(root, 1);
}

// method 1: iterative O() , AS 0()
void printLeftView2()
{
    if (root = NULL)
        return;
    queue<*Node> q;
    q.push(root);
    while (q.empty() == false)
    {
        int count = q.size();
        for (int i = 0; i < count; i++)
        {
            Node *curr = q.top();
            if (i == 0)
                cout << (curr->key) << " ";
            if (curr->left != NULL)
                q.push *(curr->left);
            if (curr->right != NULL)
                q.push *(curr->right);
        }
    }
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);
    printLeftView(root);
}