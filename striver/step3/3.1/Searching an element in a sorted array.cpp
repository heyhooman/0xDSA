//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searche
    int searchInSorted(int arr[], int N, int K) 
    { int s=0; 
    int e=N-1;
        int mid;
        while(e>=s){
            mid=(s+e)/2;
            
            if(arr[mid]<K){
                s=mid+1;
            }
            else if(arr[mid]>K){
                e=mid-1;
            }
            if(arr[mid]==K){
                return 1;
            }
            
        }
        return -1;
    
       // Your code here
       
    }
};

//{ Driver Code Starts.


int main(void) 
{ 
    
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        Solution ob;
        cout << ob.searchInSorted(arr, n, k) << endl;

    }

	return 0; 
} 

// } Driver Code Ends