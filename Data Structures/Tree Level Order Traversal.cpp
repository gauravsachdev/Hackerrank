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
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }
/*
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
    void levelOrder(Node * root) {
        queue <Node * > tovisit;
        tovisit.push(root);
        while(!tovisit.empty())
        {
            cout<<tovisit.front()->data<<" ";
            if(tovisit.front()->left!=NULL)
            tovisit.push(tovisit.front()->left);
            if(tovisit.front()->right!=NULL)
            tovisit.push(tovisit.front()->right);
            tovisit.pop();
                   
        }

    }

}; //End of Solution