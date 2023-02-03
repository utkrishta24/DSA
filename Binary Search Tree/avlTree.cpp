/*
1. it is a BST - for every node, left substree is smaller and right is greater
2. it is balanced - for every node, difference between left and right heights does not exceed one
Balance Factor = |lh-rh|
Balance Factor <= 1

Insert Operation:
>perform normal BST insert
>traverse all ancestors of the newly inserted node from the node to root
>if find and unbalanced node, check for any of the below cases:
->single rotation:
    >Left Left
    >Right Right
->double rotation
    >Left Right
    >Right Left
>one unbalanced is required to fixed
>0(logn)

Delete Operation : takes more than one fixing

Height of AVL: h<clog2(n+2)+b
             where c~  1.4405
                   b~ -1.3277
                
*/


