//{ Driver Code Starts
// Initial Template for C++

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// } Driver Code Ends


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int countNodes(int i) {
        int x;
        x=pow(2, i-1);
        return x;
        // your code here
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int i;
        cin >> i;
        Solution ob;
        int res = ob.countNodes(i);

        cout << res;
        cout << "\n";
    }
}

// } Driver Code Ends
