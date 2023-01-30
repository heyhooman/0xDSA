/* Introduction to Doubly Linked List */

/*
class Node{
public:
    Node* prev;
    int data;
    Node* next;
 
    Node()
    { 
        prev = NULL; 
        data = 0;
        next = NULL;
    }
    
    Node(int value)
    { 
        prev = NULL; 
        data = value;
        next = NULL;
    }
};*/

class Solution {
  public:
    Node* constructDLL(vector<int>& arr) {
        struct Node *head=new Node(arr[0]);
        struct Node*temp=head;

        int i=1;
        while(i<arr.size()){
            struct Node *curr=temp;
            temp->next=new Node(arr[i]);
            temp=temp->next;
            temp->prev=curr;
            i++;
            
        }
        return head;
        
        // code here
    }
};
