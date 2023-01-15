//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class QueueStack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int);
    int pop();
};


int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        QueueStack *qs = new QueueStack();

        int Q;
        cin>>Q;
        while(Q--){
        int QueryType=0;
        cin>>QueryType;
        if(QueryType==1)
        {
            int a;
            cin>>a;
            qs->push(a);
        }else if(QueryType==2){
            cout<<qs->pop()<<" ";

        }
        }
        cout<<endl;
    }
}

// } Driver Code Ends


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
            q1.push(x);


        // Your Code
}

//Function to pop an element from stack using two queues. 
int QueueStack :: pop()
{
    int r; 
        if (q1.size()==0) return -1;
    while (q1.size() != 1)
        {q2.push(q1.front());
        q1.pop();} 
       r = q1.front();
        q1.pop();

        while (q2.empty() != true)
        {q1.push(q2.front());
            q2.pop();
        }

    return r;     
        // Your Code       
}
