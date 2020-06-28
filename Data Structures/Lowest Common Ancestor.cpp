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
    //Find a node from top to bottom that lies in the middle of the two 
    Node *lca(Node *root, int v1,int v2) 
    {   if(v2<v1)
        {
            int temp=v1;
            v1=v2;
            v2=temp;
        }
        queue <Node *> q;
        q.push(root);
        while(!q.empty())
        {
            Node* temp= q.front();
            if((temp->data>v1 && temp->data<v2) || (temp->data>=v1 && temp->data<v2) || (temp->data>v1 && temp->data<=v2))
            {
                return temp;
            }
            q.pop();
            if(temp->right != NULL)
            {
                q.push(temp->right);
            }
            if(temp->left !=NULL)
            {
                q.push(temp->left);
            }
        }
        return root;
    }

}; //End of Solution