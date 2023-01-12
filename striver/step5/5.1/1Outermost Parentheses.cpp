//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string removeOuter(string& s) {
        int x = s.length();
        int count =0;
        string str;
        for(int i=0; i<x; i++){
            if(s[i]=='('){
                if(count!=0){
                    str=str+'(';
                }
                count ++;
            }
            else{
                
                count--;
        
                if(count!=0){
                    str = str + ')';
                }
                }
        }
        return str;
        // (()())(())
        // code here
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;

        cout << obj.removeOuter(s) << "\n";
    }
}
// } Driver Code Ends