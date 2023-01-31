/* Delete a Node in Single Linked List */



/* Link list Node 
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

/*You are required to complete below method*/
Node* deleteNode(Node *head,int x)
{
    if(x==1)
    {
        struct Node*temp=head;
        head=head->next;
        temp->next=NULL;
        free(temp);
    }
    else
    {
        struct Node*curr=head;
        struct Node*prev=NULL;
        int i=1;
        while(i<x)
        {
            prev=curr;
            curr=curr->next;
            i++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        free(curr);
    }
    return head;     
    
    //Your code here
}
