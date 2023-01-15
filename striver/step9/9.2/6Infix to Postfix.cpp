//{ Driver Code Starts
// C++ implementation to convert infix expression to postfix
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to convert an infix expression to a postfix expression.
     int val(char ch)
    {
          if(ch == '^') return 3;
          if(ch == '*' or ch == '/') return 2;
          if(ch == '+' or ch == '-') return 1;
          else return -1;
    }
    string infixToPostfix(string s) {
        string res;
        stack<char>st;
        for(int i=0;i<s.length();i++)
        {
               if((s[i] >= 'a' and s[i] <= 'z') or (s[i] >= 'A' and s[i]<='Z') 
                 or(s[i]>='0' and s[i] <= '9'))
                {
                      res += s[i];
                }
              else if(s[i] == '(') st.push(s[i]);
              else if(s[i] == ')')
              {
                     while(st.top() != '('){
                           res += st.top();
                           st.pop();
                     }
                     st.pop();
              }
             else{
                    while(!st.empty() and val(s[i]) <= val(st.top())){
                          res += st.top();
                          st.pop();
                    }
                    st.push(s[i]);
             }
        }
        while(!st.empty()){
              res += st.top();
              st.pop();
        }
        return res;
    }
};


//{ Driver Code Starts.
// Driver program to test above functions
int main() {
    int t;
    cin >> t;
    cin.ignore(INT_MAX, '\n');
    while (t--) {
        string exp;
        cin >> exp;
        Solution ob;
        cout << ob.infixToPostfix(exp) << endl;
    }
    return 0;
}

// } Driver Code Ends