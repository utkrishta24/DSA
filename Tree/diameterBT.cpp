// Tree Traversal in Spiral Form
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

// naive
int height(Node *root)
{
    if (root == NULL)
        return 0;
    else
        return (1 + max(height(root->left), height(root->right)));
}
void diameter(Node *root)
{
    if (root == NULL)
        return;
    int d1 = 1 + height(root->left) + height(root->right);
    int d2 = diameter(root->left);
    int d3 = diameter(root->right);
    return max(d1, max(d2, d3));
}

// efficient
int res=0;
int height(Node *root){
    if(root==NULL)
        return 0;
    int lh=height(root->left);
    int rh=height(root->right);
    res=max(res,1+lh+rh);
    
        return 1+max(lh,rh);
}


int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    diameter(root);
    return 0;
}