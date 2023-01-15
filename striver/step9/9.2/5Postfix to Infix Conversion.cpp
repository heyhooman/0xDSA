//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
 bool isOperator(char c)
    {
        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
            return false;
        }
        return true;
    }
    string postToInfix(string exp) {
        stack<string> st;
        string res;
        for(int i=0;i<exp.length();i++)
        {
            char c = exp[i];
            if(isOperator(c))
            {
                string str1 = st.top();
                st.pop();
                string str2 = st.top();
                st.pop();
                st.push('(' + str2 + exp[i] + str1 + ')');
            }
            else
            {
                st.push(string(1,exp[i]));
            }
        }
        while(!st.empty())
        {
            res += st.top();
            st.pop();
        }
        return res;
        // Write your code here
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        string postfix;
        cin >> postfix;
        // char marker; cin >> marker;

        Solution obj;
        cout << obj.postToInfix(postfix) << endl;

        // cout << "~\n";
    }
    fclose(stdout);

    return 0;
}

// } Driver Code Ends