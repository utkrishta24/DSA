// used for lossless compression
// variable length coding
/*
example: "abaabaca..." 100 characters
frequencies: a-70,b-20,c-10
fixed length encoding: a:00,b:01,c:10 ->200 bits memory needed
--->Variable length Huffman coding:
1. Greedy Idea: the most frequent character has smallest code
2. Prefix requirement for decompression: no code should be prefix of any other
a-70   b-20   c-10
0       10      11      Prefix free->130 bits
1       01      00      Prefix free
0       00      01      Not Prefix free
1       0       11      Not Prefix free
*/
/*
Huffman Algorithm: (High Level Idea)
        1) Build a Binary Tree:
            >every input character is a leaf
            >every left child edge is labelled as 0 and right edge as 1
            >every root to leaf path represents Huffman code of the leaf.
        2) Traverse the Binary Tree and print the codes
*/
/*
Algorithm:
// Building Binary tree:
1> Create leaf nodes and build a Min Heap h of all the levels initially.
2> While h.size()>1:
    a. left=h.extractMin()
    b. right=h.extractMin()
    c. create a new tree node with
        *character a $
        *frequency as left.freq+right.freq
        *left and right children as left and right respectively.
    d. insert the new nodee into h
3> The only node left in h is our required Binary Tree.

// Printing Huffman Codes from the Build Binary tree
void printCodes(root,str="")
    if(root==null)
        return
    if (root.ch!='$)
        print(root.ch+" "+str)
        return
    printCodes(root.left,str+"0")
    printCodes(root.right,str+"1")

*/

// structure of a binary(or huffman) tree node
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int freq;
    char ch;
    Node *left, *right;
    Node(int f, char c, Node *l = NULL, Node *r = NULL)
    {
        freq = f;
        ch = c;
        left = l;
        right = r;
    }
};

struct compare
{
    bool operator()(Node *l, Node *r)
    {
        return (l->freq, r->freq);
    }
};

void printCodes(Node *root, string str)
{
    if (root->ch != '$')
    {
        cout << root->ch << " " << str << "\n";
        return;
    }
    printCodes(root->left, str + "0");
    printCodes(root->right, str + "1");
}

void printHCodes(int arr, int freq, int n)
{
    priority_queue<Node *, vector<Node *> compare> h;
    for (int i = 0; i < n; i++)
        h.push(new Node(arr[i], freq[i]));
    while (h.size() > 1)
    {
        Node *l = h.top();
        h.pop();
        Node *r = h.top();
        h.pop();
        Node *node = new Node('$', l->freq + r->freq, l, r);
        h.push(node);
    }
    printCodes(h.top(), "");
}

// O(nlogn)
// AS O(n)
int main()
{
    char arr[] = {'a', 'd', 'e', 'f'};
    int freq[] = {30, 40, 80, 60};
    int size = sizeof(arr) / sizeof(arr[0]);
    printHcodes(arr, freq, size);
    return 0;
}
