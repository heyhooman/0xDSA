//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int findKRotation(int arr[], int n) {
	   vector<int>v;
	   for(int i=0; i<n; i++){
	       v.push_back(arr[i]);
	   }
	   sort(v.begin(), v.end());
	   int x= v.front();
	  for(int i=0; i<n; i++){
	      if(arr[i]==x){
	          return i;
	      }
	  } 
	  return 0;
	    // code here
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findKRotation(a, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends