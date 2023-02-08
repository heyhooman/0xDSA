/* Palindrome */

//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
	public:
		string is_palindrome(int n)
		{
		    string s = to_string(n) ;
		    string x=s ;
		    reverse(s.begin(),s.end()) ;
		    if(s==x){
		        return "Yes" ;
		    }
		    else{
		        return "No" ;
		    }
		    /*string s= to_string(n);
		    int x= s.length();
		    string ans="Yes";
		    for(int i=0;i<x/2; i++){
		        if(s[i]!=s[n-i-1]){
		            ans= "No";
		            
		        }
		    }
		    
	retrun ans;*/
		    // Code here.
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	string ans = ob.is_palindrome(n);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends
