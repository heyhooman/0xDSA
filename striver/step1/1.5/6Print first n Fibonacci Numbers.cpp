//{ Driver Code Starts
//Initial function template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    int i= 1;
        int y= 1;
    vector<long long> printFibb(int n) 
    { vector<long long> arr(n);
        arr[0]=1;
        arr[1]=1;
        for(int i=2; i<n; i++){
            arr[i]=arr[i-1]+arr[i-2];
            
        }
        return arr;
        
        //code here
    }
};

//{ Driver Code Starts.
int main()
 {
     //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking number of elements
        int n;
        cin>>n;
        Solution obj;
        //calling function printFibb()
        vector<long long> ans = obj.printFibb(n);
        
        //printing the elements of vector
        for(long long i:ans)cout<<i<<' ';
        cout<<endl;
    }
	return 0;
}

// } Driver Code Ends