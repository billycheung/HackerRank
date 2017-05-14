/*

You are given pointer to the root of the binary search tree and two values v1 and v2. You need to return the lowest common ancestor (LCA) of v1 and v2 in the binary search tree. You only need to complete the function.
Sample Input

         4
       /   \
      2     7
     / \   /
    1   3 6
 v1 = 1 and v2 = 7

Sample Output

LCA of 1 and 7 is 4 (which is the root). 
Return a pointer to the root in this case.

*/

/*
Node is defined as 

typedef struct node
{
   int data;
   node * left;
   node * right;
}node;

*/


node * lca(node * root, int v1,int v2)
{
    if (root == NULL || root->data == v1 || root->data == v2)
        return root;

    node* left = lca(root->left, v1, v2);
    node* right = lca(root->right, v1, v2);

    if (left != NULL && right != NULL)
        return root;

    return left != NULL? left: right;
}

