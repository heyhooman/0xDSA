/* Reverse a Doubly Linked List */

Node* reverseDLL(Node * head)
{
    Node* z;
    Node* y;
    Node* x;
    
    z = NULL;
    y = NULL;
    x = head;
    
    while(x)
    {
        z = y;
        y = x;
        x = x -> next;
        
        y->next = z;
        y -> prev = x;
    }
    
    head = y;
    return head;

    //Your code here
}
