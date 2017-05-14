#include <iostream>
#include <cstddef>

using namespace std;	

class Node{
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d){
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            }
            else {
                Node* cur;
                if(data <= root->data){
                    cur = insert(root->left, data);
                    root->left = cur;
                }
                else{
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }

        int height(Node* root) {
        	if (root == NULL)
        		return -1;
        	return 1 + max(height(root->left), height(root->right));
    	}

    	void print_left(Node* root){
    		if (root == NULL)
    			return;

    		if (root->left != NULL){
    			print_left(root->left);
    		}
    		cout << root->data << " ";
    	}

    	void print_right(Node* root){
    		if (root == NULL)
    			return;

    		cout << root->data << " ";
    		if (root->right != NULL){
    			print_right(root->right);
    		}
    	}

    	void top_view(Node * root)
		{
		 	print_left(root->left);
		 	cout << root->data << " ";
		 	print_right(root->right);
		}
}; //End of Solution



int main() {
    Solution myTree;
    Node* root = NULL;
    int t;
    int data;

    Node* head = new Node(3);

    Node* n1 = new Node(9);

    Node* n2 = new Node(1);
    n2->right = n1;

    Node* n3 = new Node(4);
    Node* n4 = new Node(5);
    n4->left = n2;
    n4->right = n3;

    head->left = n4;

    Node* n5 = new Node(8);
    Node* n6 = new Node(7);
    n6->left = n5;

    Node* n7 = new Node(6);
    Node* n8 = new Node(2);
    n8->left = n7;
    n8->right = n6;
    head->right = n8;

    myTree.top_view(head);

    int height = myTree.height(root);
    //cout << "height:" << height;

    return 0;
}

