//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string maxOdd(string s) {
        // your code here
        int y = -1;
        string odd;
        for(int i = s.size()-1; i >= 0; i--) {
            int x = s[i]-'0';
            if(x % 2 != 0) {
                y = i;
                break;
            }
        }
        if(y == -1) {
            return "";
        }
        
        for(int i = 0; i <= y; i++) {
            odd += s[i];
        }
        return odd;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;

        cout << ob.maxOdd(s) << endl;
    }
}

// } Driver Code Ends
