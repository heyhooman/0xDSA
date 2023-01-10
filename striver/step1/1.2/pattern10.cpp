//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//Back-end complete function Template for C++
class Solution{
public:
    void printTriangle(int n) {
        for(int i=1; i<n+1; i++){
            for( int y =i; y>0; y--){
                
                    cout<<"* ";
            }
            cout<<"\n";
        }
         for(int i=n-1; i>0; i--){
            
            for( int y =i; y>0; y--){
                
                    cout<<"* ";
                
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