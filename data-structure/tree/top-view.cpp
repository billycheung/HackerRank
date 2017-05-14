/*
You are given a pointer to the root of a binary tree. Print the top view of the binary tree. 
You only have to complete the function. 
For example :

     3
   /   \
  5     2
 / \   / \
1   4 6   7
 \       /
  9     8
Top View : 1 -> 5 -> 3 -> 2 -> 7
*/

/*
struct node
{
    int data;
    node* left;
    node* right;
};

*/


void print_left(node* root){
    if (root == NULL)
        return;

    if (root->left != NULL){
        print_left(root->left);
    }
    cout << root->data << " ";
}

void print_right(node* root){
    if (root == NULL)
        return;

    cout << root->data << " ";
    if (root->right != NULL){
        print_right(root->right);
    }
}

void top_view(node * root)
{
    print_left(root->left);
    cout << root->data << " ";
    print_right(root->right);
}