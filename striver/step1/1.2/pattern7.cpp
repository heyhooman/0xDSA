//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        
        
        for(int i=1; i<n+1; i++){
            
            for(int x= n-i; x>0; x--){
                cout<<" ";
                }
            for( int y = 2*i -1; y>0; y--){
                
                    cout<<"*";
                
            }
            
            
            cout<<"\n";
            
                
            }
        
        /*int i, y;
        int x=1;
        i=x*(n-1);
        
        while(i!=n){
            cout<<" -";
            i++;
            cout<<" *";
        }
        */
        
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