#include <queue>
#include <iostream>
using namespace std;
/*
A level-order traversal, also known as a breadth-first search, visits each level of a tree's nodes from left to right, top to bottom. You are given a pointer, , pointing to the root of a binary search tree. Complete the levelOrder function provided in your editor so that it prints the level-order traversal of the binary search tree.

Hint: You'll find a queue helpful in completing this challenge.

Sample Input
6
3
5
4
7
2
1

Sample Output
3 2 5 1 4 7 
*/


class Node{
    public:
        int data;
        Node *left,*right;
        Node(int d){
            data=d;
            left=right=NULL;
        }
};

class Solution{
public:
		Node* insert(Node* root, int data){
        if(root==NULL){
            return new Node(data);
        }
        else{
            Node* cur;
            if(data<=root->data){
                cur=insert(root->left,data);
                root->left=cur;
            }
            else{
               cur=insert(root->right,data);
               root->right=cur;
             }           
       return root;
       }
    }

	void levelOrder(Node * root){
	    if (root == NULL) return;
	    queue<Node*> q;
	    q.push(root);
	    while (!q.empty()){
	        Node* tmp = q.front(); q.pop();
	        cout << tmp->data << " ";
	        if (tmp->left != NULL)
	            q.push(tmp->left);
	        if (tmp->right != NULL)
	            q.push(tmp->right);
	    }
	}
};

int main(){
Solution myTree;
Node* root=NULL;
int T,data;
cin>>T;
while(T-->0){
    cin>>data;
    root= myTree.insert(root,data);
}
myTree.levelOrder(root);
return 0;
}