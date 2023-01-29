/* Infix to Postfix */
class Solution {
  public:
    // Function to convert an infix expression to a postfix expression.
     int precedence(char c)
    {
          if(c == '^'){
              return 3;
          }
          if(c == '*' or c == '/'){
              return 2;
          }
          if(c == '+' or c == '-'){
              return 1;
          }
          else{
              return -1;
          }
    }
    string infixToPostfix(string s) {
        string res;
        stack<char>stack;
        for(int i=0;i<s.length();i++){
            
            if((s[i] >= 'a' and s[i] <= 'z') || (s[i] >= 'A' and s[i]<='Z') || (s[i]>='0' and s[i] <= '9')){
                      res += s[i];
            }
            else if(s[i] == '('){
                  stack.push(s[i]);
            }
            else if(s[i] == ')'){
                while(stack.top() != '('){
                    res += stack.top();
                    stack.pop();
                }
                stack.pop();
            }
            else{
                while(!stack.empty() && precedence(s[i]) <= precedence(stack.top())){
                      res += stack.top();
                      stack.pop();
                }
                stack.push(s[i]);
            }
        }
        while(!stack.empty()){
              res += stack.top();
              stack.pop();
        }
        return res;
    }
};
