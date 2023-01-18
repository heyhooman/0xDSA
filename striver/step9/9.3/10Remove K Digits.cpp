//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string removeKdigits(string S, int K) {
        if(K>=S.size()){
           return "0";
        }
       string ans="";
       stack<char>stk;
       for(int i=0;i<S.size();i++)
       {
             while(!stk.empty() and K>0 and stk.top()>S[i])
            {
                stk.pop();
                K--;
            }
            
            if(!stk.empty() or S[i]!='0'){  //when stack empty then can't insert 0
                stk.push(S[i]);
            }
           
       }
       while(K>0 and !stk.empty())
       {
           stk.pop();
           K--;
       }
       if(stk.empty()){
           return "0";
       }
       else{
           while(!stk.empty()){
               ans+=stk.top();
               stk.pop();
           }
       }
       reverse(ans.begin(),ans.end());
       return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        int K;
        cin >> K;
        Solution obj;
        cout << obj.removeKdigits(S, K) << endl;
    }
    return 0;
}

// } Driver Code Ends