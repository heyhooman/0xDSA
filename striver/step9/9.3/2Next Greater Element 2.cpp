//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> nextGreaterElement(int N, vector<int>& arr) {
        // code here
       stack<int> s;
       vector<int> v(N,-1);
       
       for(int i = 0; i< N* 2;i++){
           int curr = arr[i % N] ;
           while(!s.empty() && arr[s.top()] < curr){ 
              v[s.top()] = curr;
              s.pop();
           }
           if(i<N){
               s.push(i);
           }
       }
       return v;
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
        vector<int> ans = obj.nextGreaterElement(N, arr);
        for (auto &it : ans) {
            cout << it << ' ';
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends