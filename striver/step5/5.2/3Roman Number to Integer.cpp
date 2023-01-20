//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &str) {
      unordered_map<char,int> m{

          {'I',1},

          {'V',5},

          {'X',10},

          {'L',50},

          {'C',100},

          {'D',500},

          {'M',1000},

        };

        int ans =0;

        for(int i=0;i<str.size();++i){

            if(m[str[i]] < m[str[i+1]])

                ans -=m[str[i]];

            else

                ans+= m[str[i]];

        }

        return ans;
        // switch (str)
        //     {
        //          case 'I':return 1;

        //         case 'V':return 5;
                
        //         case 'X':return 10;
                
        //         case 'L':return 50;
                
        //         case 'C':return 100;
                
        //         case 'D':return 500;

        //         case 'M':return 1000;
        //         default: return -1;
        //     }
        
        // I 1
        // V 5
        // X 10
        // L 50
        // C 100
        // D 500
        // M 1000
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
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends
