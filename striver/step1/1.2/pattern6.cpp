//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
	
	void printTriangle(int n) {
	    int x=1;
	    for(int i=0; i<n ; i++){
	        for (int y=n; y>i; y--){
	            cout<<x<<" ";
	            x++;
	        }
	        x=1;
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