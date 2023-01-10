//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
         char c;
            c=65;
         for(int i= 1; i<n+1; i++){
           
            for (int j=0; j<i; j++){
                cout<<c;
                
            }
            cout<<"\n";
            c++;
            
        }
        // code here
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends