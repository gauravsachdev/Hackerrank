#include <bits/stdc++.h>

using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  	
  	void preOrder(Node *root) {
		
      	if( root == NULL )
          	return;
      
      	std::cout << root->data << " ";
      	
      	preOrder(root->left);
      	preOrder(root->right);
    }

/*
Node is defined as 

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

*/
    Node * insert(Node * root, int data) {
        Node* copy=root;
        if(copy == NULL)
        {   Node* temp= new Node(data);
            return temp;
        }
        while(copy!= nullptr)
        {
            if(data>(copy->data))
            {   if(copy->right == NULL)
                {   Node* temp = new Node(data);
                    copy->right = temp;
                    break; 
                }
                copy=copy->right;
            }
            else
            {   if(copy->left == NULL)
                {
                    Node* temp = new Node (data);
                    copy->left = temp;
                    break;
                }
                copy=copy->left;
            }
        }
        
        return root;
    }

};