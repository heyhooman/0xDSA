//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string preToInfix(string pre_exp) {
        stack<string> s;
        int n=pre_exp.size();
                
        for(int i=n-1; i>=0; i--)
        {
            char c = pre_exp[i];
            if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
            {
                stringstream stream;
                
                stream << c;
                string res;
                stream >> res;
                s.push(res);
            }
            else
            {
                string s1 = s.top();
                s.pop();
                string s2 = s.top();
                s.pop();
                string res = "(" + s1 + c + s2 + ")";
                s.push(res);
            }
        }
        
        return s.top();
        
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
        string prefix;
        cin >> prefix;

        Solution obj;
        cout << obj.preToInfix(prefix) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends