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
/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
    int height(Node* root) {
        // Write your code here.
        
        if(root->left == NULL && root->right == NULL )
        return 0;
        int l=0;int r=0;
        if(root->left !=NULL)
        {
         l = 1+ height(root->left);
        }
        if(root->right != NULL)
        {
         r = 1 + height(root->right);
        }
        return (l>r)?l:r;

    }

}; //End of Solution