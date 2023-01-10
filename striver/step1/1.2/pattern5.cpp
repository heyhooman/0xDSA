//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
	
	void printTriangle(int n) {
	    int y=0;
	    for(int i=0; i<n; i++){
	        for(y=n; y>i; y--){
	        
	        cout<<"*"<<" ";
	        
	        }
	    cout<<"\n";
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