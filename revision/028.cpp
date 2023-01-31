/* Doubly linked list Insertion at given position */

/* a Node of the doubly linked list 
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
}; */

//Function to insert a new node at given position in doubly linked list.
void addNode(Node *head, int pos, int data)
{
     int count = 0;
     while(head){
       if(count == pos){
           Node *temp = new Node(data);
           temp->next = head->next;
           if(head->next) head->next->prev = temp;
           temp->prev = head;
           head->next = temp;
       }
       count++;
       head = head->next;
     }
   // Your code here
}
