//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        long long maxarea=0;
        vector<int> ps=prevsmal(arr,n);
        vector<int> ns=nextsmal(arr,n);
        for(int i=0;i<n;i++){
            long long cur=(ns[i]-ps[i]-1)* arr[i];
            maxarea=max(maxarea,cur);
        }
        return maxarea;

        // Your code here
    }
    vector<int> nextsmal(long long a[],int n){
        stack<int> st;
        vector<int> res;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && a[st.top()]>=a[i]) st.pop();
            if(st.empty()) res.push_back(n);
            else res.push_back(st.top());
            st.push(i);
        }
        reverse(res.begin(),res.end());
        return res;
    }
    vector<int> prevsmal(long long a[],int n){
        stack<int> st;
        vector<int> res;
        for(int i=0;i<n;i++){
            while(!st.empty() && a[st.top()]>=a[i]) st.pop();
            if(st.empty()) res.push_back(-1);
            else res.push_back(st.top());
            st.push(i);
        }
        return res;
    }
};


//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}

// } Driver Code Ends