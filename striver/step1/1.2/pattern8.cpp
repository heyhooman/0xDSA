//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
	
	void printTriangle(int n) {
	    
        
        
        for(int i=n; i>0; i--){
            
            for(int x=0; x<n-i; x++){
                cout<<" ";
                }
            for( int y = 2*i -1; y>0; y--){
                
                    cout<<"*";
                
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