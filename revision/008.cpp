/* Get minimum element from stack */

/*
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/

class Solution{
    int min_ele;
    stack<int> s;
    public:
    
       /*returns min element from stack*/
       int getMin(){
           if(s.empty()){
               return -1;
           }
        return min_ele;
           
           //Write your code here
       }
       
       /*returns poped element from stack*/
       int pop(){
           if(s.empty()){
               return -1;
           }
           
           int cur=s.top();
           s.pop();
           
           if(cur>min_ele){
               return cur;
           }
           else{
               int prevmin=min_ele;
               int val=2*min_ele-cur;
               min_ele=val;
               return prevmin;
           }
           
           //Write your code here
       }
       
       /*push element x into the stack*/
       void push(int x){
             if(s.empty()){
               s.push(x);
               min_ele=x;
           }
           else{
               if(x<min_ele){
                   s.push(2*x-min_ele);
                   min_ele=x;
               }
               else{
                   s.push(x);
               }
           }
       
           
           //Write your code here
       }
};
