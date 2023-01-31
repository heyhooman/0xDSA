/* Search in Linked List */

/* Link list node */
/*
struct Node
{
    int data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
}; */

class Solution {
  public:
    // Function to count nodes of a linked list.
    bool searchKey(int n, struct Node* head, int key) {
        // Code here
        bool flag=false;
        if(n==0){
            return flag;
        }
        if(head==NULL){
            return flag;
        }
        while(head!=NULL){
            if(head->data==key){
                flag= true;
                break;
            }
            else{
                head=head->next;
            }
        }
        return flag;
    }
};
