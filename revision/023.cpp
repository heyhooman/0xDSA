/* Introduction to Linked List */

// User function Template for C++

/*class Node {
public:
    int data;
    Node* next;
  
    // Default constructor
    Node()
    {
        data = 0;
        next = NULL;
    }
  
    // Parameterised Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};*/

class Solution {
  public:
    Node* constructLL(vector<int>& arr) {
      
      Node* first= new Node(arr[0]);
      if(arr.size()==1){
          return first;
      }
      Node *current= first;
      int i=1;
      while(current!=NULL && i<arr.size()){
          Node *temp= new Node(arr[i]);
          current->next=temp;
          current=temp;
          i++;
      }
      return first;
        
        // code here
    }
};
