/* 20. Valid Parentheses

Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
 */

class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for (int i = 0; i < s.length(); i++){
            char ch = s[i];
            if (ch == '{' || ch == '(' || ch == '['){
                stk.push(ch);
            }
            else{
                if (stk.empty() == true){
                    return false;
                }
                char top = stk.top();
                if ((top == '{' && ch == '}') || (top == '(' && ch == ')') || (top == '[' && ch == ']')){
                    stk.pop();
                }
                else{
                    return false;
                }
            }
        }
        if (stk.empty() == true){
            return true;
        }
        else{
            return false;
        }
 
    }
};
