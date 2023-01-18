//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    long long subarrayRanges(int N, vector<int> &arr) {
        // code here
        long long ans=0;
        long long sum=0;
        for(int i=0;i<N;i++){
            int maxi=arr[i];
            int mini=arr[i];
            for(int j=i;j<N;j++){
                maxi=max(maxi,arr[j]);
                mini=min(mini,arr[j]);
                sum=maxi-mini;
                ans=ans+sum;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> arr(N);
        for (int i = 0; i < N; i++) cin >> arr[i];

        Solution obj;
        cout << obj.subarrayRanges(N, arr) << endl;
    }
    return 0;
}
// } Driver Code Ends