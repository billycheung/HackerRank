/*
The height of a binary search tree is the number of edges between the tree's root and its furthest leaf. You are given a pointer, , pointing to the root of a binary search tree. Complete the getHeight function provided in your editor so that it returns the height of the binary search tree.
Sample Input
7
3
5
2
1
4
6
7

Sample Output
3
*/		

int getHeight(Node* root){
    if (root == NULL) return -1;
    return 1 + max(getHeight(root->left), getHeight(root->right));
}

