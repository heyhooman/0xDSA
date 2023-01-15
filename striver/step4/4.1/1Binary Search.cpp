//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        int s=0; 
        int e=n;
        int mid;
        while(e>=s){
            mid=(s+e)/2;
            if(arr[mid]==k){
                return mid;
                
            }
            if(arr[mid]>k){
                e=mid-1;
                
            }
            else if(arr[mid]<k){
                s=mid+1;
            }
            
            }
            return -1;
        
        // code here
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        int key;
        cin >> key;
        Solution ob;
        int found = ob.binarysearch(arr, N, key);
        cout << found << endl;
    }
}

// } Driver Code Ends