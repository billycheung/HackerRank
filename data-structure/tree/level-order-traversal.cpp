#include <queue>
using namespace std;

/*
You are given a pointer to the root of a binary tree. You need to print the level order traversal of this tree. In level order traversal, we visit the nodes level by level from left to right. 
You only have to complete the function. 
For example:

         3
       /   \
      5     2
     / \    /
    1   4  6
For the above tree, the level order traversal is 3 -> 5 -> 2 -> 1 -> 4 -> 6.
*/


/*
struct node
{
    int data;
    node* left;
    node* right;
}*/

void LevelOrder(node * root)
{
    if (root == NULL)
        return;

    queue<node*> nodes;
    nodes.push(root);
    while (!nodes.empty()){
        node* curr = nodes.front();
        nodes.pop();
        cout << curr -> data << " ";

        if (curr->left != NULL)
            nodes.push(curr->left);

        if (curr->right != NULL)
            nodes.push(curr->right);
    }
}
