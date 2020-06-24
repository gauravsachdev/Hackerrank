#include<bits/stdc++.h>

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

*/  void top_View(map <int,Node *> &hdnodes,queue <int> &hdq,queue <Node *> &vertical)
    {
     while(!vertical.empty())
     {
        int hd= hdq.front();
        Node* root = vertical.front();
        vertical.pop();
        hdq.pop();
        if(hdnodes.count(hd)==0)
        {
            hdnodes[hd]=root;
        }
        if(root->left != NULL)
        {
            vertical.push(root->left);
            hdq.push(hd-1);
        }
        if(root->right != NULL)
        {
            vertical.push(root->right);
            hdq.push(hd+1);
        }
     }
    }
    void topView(Node * root) 
    {   queue <Node *> vertical;
        queue <int> hdq;
        map <int,Node *> hdnodes;
        vertical.push(root);
        hdq.push(0);
        top_View(hdnodes,hdq,vertical);
        map<int, Node *>::iterator itr;
        for (itr = hdnodes.begin(); itr != hdnodes.end(); ++itr) { 
        cout <<(itr->second)->data<<" ";
    } 
    }
}; //End of Solution