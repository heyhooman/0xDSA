//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string preToPost(string pre_exp) {
        stack<string> st;
        for(int i = pre_exp.size() - 1; i >= 0; i--){
            if((pre_exp[i] >= 65 && pre_exp[i] <= 90) || (pre_exp[i] >= 97 && pre_exp[i] <= 122)){
                string temp = "";
                temp = temp + pre_exp[i];
                st.push(temp);
            }
            else{
                string op1 = st.top();
                st.pop();
                string op2 = st.top();
                st.pop();
                string temp = "";
                temp = temp + op1 + op2 + pre_exp[i];
                st.push(temp);
            }
        }
        return st.top();
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        string prefix;
        cin >> prefix;

        Solution obj;
        cout << obj.preToPost(prefix) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends