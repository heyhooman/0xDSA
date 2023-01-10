//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        
         for(int i=1; i<n+1; i++){
            for( int y =i; y>0; y--){
                
                if(i%2 != 0){
                    if(y%2 !=0){
                        cout<<"1 ";
                    }
                    else{
                    cout<<"0 ";
                    }
                }
                else {
                    if(y%2 !=0){
                        cout<<"1 ";
                    }
                    else{
                    cout<<"0 ";
                    }
                }
                    
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