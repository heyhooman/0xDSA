//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
        vector<long long>ans;
            long long fact(long long i){
            
                if(i==0 || i==1)
                return 1;
                return i*fact(i-1);
            
            }
            
        void fNumber(long long N)
            
            {
            
            long long x;
            
            for(long long i=1;i<=(N/2)+1;i++)
            
            {
            x=fact(i);
            
            if(x<=N)
            
            ans.push_back(x);
            
            else
            
            return;
            
            }
            
            
            
            }
    vector<long long> factorialNumbers(long long N){
        vector<long long> arr;
           fNumber(N);

        return ans;
        
    
        
        // Write Your Code here
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long N;
        cin>>N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for(auto num : ans){
            cout<<num<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}
// } Driver Code Ends