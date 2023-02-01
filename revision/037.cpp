/* Armstrong Numbers */

//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
        int p=n;
        int sum=0;
        while(n!=0){
            int x=n%10;
            sum+= pow(x,3);
            n=n/10;
        }
        /*    int x =p%10;
        p=p/10;
        int y= p%10;
        p=p/10;
        int z = p%10;
        int sum = pow(x,3)+pow(y,3)+pow(z,3);*/
        if (sum==p){
            return "Yes";
        }        
        else{
            return "No";
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
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends
