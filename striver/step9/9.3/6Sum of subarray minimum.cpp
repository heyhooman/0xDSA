//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int sumSubarrayMins(int N, vector<int> &arr) {
        // code here
        vector<long> s, sums(N,0);
        long j, ans=0, mod = 1000000007;
        for (int i = 0; i < N; ++i)
        {
            while (!s.empty() && arr[s.back()] > arr[i]){
                s.pop_back();
            }
            j = !s.empty() ? s.back() : -1;
            
            sums[i] = ((j>=0?sums[j]:0) + (i-j)*arr[i]) % mod;
            s.push_back(i);
        }

        for (int i = 0; i < sums.size(); ++i)
            ans = (ans + sums[i]) % mod;
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
        cout << obj.sumSubarrayMins(N, arr) << endl;
    }
    return 0;
}
// } Driver Code Ends