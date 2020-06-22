#include <bits/stdc++.h>

using namespace std;

class SinglyLinkedListNode {
    public:
        int data;
        SinglyLinkedListNode *next;

        SinglyLinkedListNode(int node_data) {
            this->data = node_data;
            this->next = nullptr;
        }
};

class SinglyLinkedList {
    public:
        SinglyLinkedListNode *head;
        SinglyLinkedListNode *tail;

        SinglyLinkedList() {
            this->head = nullptr;
            this->tail = nullptr;
        }

        void insert_node(int node_data) {
            SinglyLinkedListNode* node = new SinglyLinkedListNode(node_data);

            if (!this->head) {
                this->head = node;
            } else {
                this->tail->next = node;
            }

            this->tail = node;
        }
};

void print_singly_linked_list(SinglyLinkedListNode* node, string sep, ofstream& fout) {
    while (node) {
        fout << node->data;

        node = node->next;

        if (node) {
            fout << sep;
        }
    }
}

void free_singly_linked_list(SinglyLinkedListNode* node) {
    while (node) {
        SinglyLinkedListNode* temp = node;
        node = node->next;

        free(temp);
    }
}

// Complete the findMergeNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
 SinglyLinkedListNode* temp1 = head1;
 SinglyLinkedListNode* temp2 = head2;
 int counter1=1; int counter2=1;
 while(head1->next != nullptr)
 {
   counter1++;
   head1=head1->next;
 }
 while(head2->next != nullptr)
 {
     counter2++;
     head2=head2->next;
 }
 SinglyLinkedListNode* head;
 SinglyLinkedListNode* smallerhead;
 int lendiff=0;
 if(counter1>=counter2)
 {
    head=temp1;
    smallerhead=temp2;
    lendiff=(counter1-counter2);
 }
 else
 {
     head=temp2;
     smallerhead=temp1;
     lendiff=(counter2-counter1);
 }
 for(int i=0;i<lendiff;i++)
 { cout<<"lendiff"<<lendiff<<endl;
   head=head->next;
 }
 while(head->next!=nullptr)
 {
    if(head == smallerhead)
    {
       return head->data;
    }
    head=head->next;
    smallerhead=smallerhead->next;
 }
 return head->data;
}

int main()