/* Delete node in Doubly Linked List */

/* Structure of Node
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  
  Node(int x){
      data = x;
      next = NULL;
      prev = NULL;
  }
  
};
*/

class Solution
{
    public:
    Node* deleteNode(Node *head_ref, int x)
    {
         if(x==1){
          return head_ref->next;
      }
      Node *temp=head_ref;
      for(int i=1;i<x-1;i++){
          temp=temp->next;
      }
      if(temp->next->next==NULL){
          temp->next=NULL;
          return head_ref;
      }
      temp->next=temp->next->next;
      temp->next->prev=temp;
      return head_ref;
      //Your code here
    }
};
