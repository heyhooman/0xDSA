//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int maxDepth(string s) {
        // code 
        int count = 0, max_count = 0;
        
        for(int i=0; i<s.length(); i++){
            if(s[i] == '(')
                count++;
            else if(s[i] == ')')
                count--;
            max_count = max(max_count, count);
        }
        
        return max_count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution obj;
        int ans = obj.maxDepth(s);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends
