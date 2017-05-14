/*
You are given a pointer to the root of a binary search tree and a value to be inserted into the tree. Insert this value into its appropriate position in the binary search tree and return the root of the updated binary tree. You just have to complete the function.

Sample Input

        4
       / \
      2   7
     / \
    1   3
The value to be inserted is 6.

Sample Output

         4
       /   \
      2     7
     / \   /
    1   3 6

*/


node * insert(node * root, int value)
{
    if(root == NULL) {
        node* newNode = new node();
        newNode->data = value;
        newNode->left = NULL;
        newNode->right = NULL;
        return newNode;
    }
    else {
        node* cur;
        if(value <= root->data){
            cur = insert(root->left, value);
            root->left = cur;
        }
        else{
            cur = insert(root->right, value);
            root->right = cur;
        }

        return root;
    }
}
