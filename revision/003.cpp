/* Stack using two queues */

/* The structure of the class is
class QueueStack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int);
    int pop();
};
 */

//Function to push an element into stack using two queues.
void QueueStack :: push(int x)
{
            q2.push(x);
        // Your Code
}

//Function to pop an element from stack using two queues. 
int QueueStack :: pop()
{
        if (q2.size()==0){
            return -1;
        }
        while (q2.size() != 1){
            q1.push(q2.front());
            q2.pop();
        } 
        int x = q2.front();
        q2.pop();
    
        while (!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
    
        return x;     
        // Your Code       
}

