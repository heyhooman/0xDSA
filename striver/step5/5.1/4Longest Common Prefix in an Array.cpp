//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        sort(arr,arr+N);
        string a="";
        for(int i=0;i<arr[0].size();i++)
        {
            if(arr[0][i]==arr[N-1][i]){
                a+=arr[0][i];
            }
            else{
                break;
            }
        }
        if(a.size()>0){
            return a;
        }  
        return "-1";
        // your code here
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends
