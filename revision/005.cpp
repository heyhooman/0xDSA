/* Implement Queue using Linked List */

/* Structure of a node in Queue
struct QueueNode
{
    int data;
    QueueNode *next;
    QueueNode(int a)
    {
        data = a;
        next = NULL;
    }
};

And structure of MyQueue
struct MyQueue {
    QueueNode *front;
    QueueNode *rear;
    void push(int);
    int pop();
    MyQueue() {front = rear = NULL;}
}; */

//Function to push an element into the queue.
void MyQueue:: push(int x)
{
    QueueNode* new_node = new QueueNode(x);
    if(front == NULL){
        front = new_node;
    }
    else{
        rear->next = new_node;
    }
    rear = new_node;
        // Your Code
}

//Function to pop front element from the queue.
int MyQueue :: pop()
{
    if(front == NULL){
        return -1;
    }
    int x = front->data;
    QueueNode* temp = front;
    front = front->next;
    delete temp;
    return x;
        // Your Code       
}
