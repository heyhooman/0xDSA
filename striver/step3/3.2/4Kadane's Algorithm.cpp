//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        long long maxele= INT_MIN;
        long long int currsum=0;
         long long int maxsum=0;
        for(long long int i=0;i<n;i++){
            currsum+=arr[i];
        if(maxsum<currsum){
            maxsum=currsum;
        }    
            if(currsum<0){
            currsum=0;        
            }
            
        }
        for (int i=0; i<n; i++){
            if(arr[i]>maxele){
                maxele=arr[i];
            }
            
        }
        if(maxele<0){
        return maxele;
        }
        else{
        return maxsum;
        }
        // Your code here
        
    }
};

//{ Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}

// } Driver Code Ends