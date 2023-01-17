//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> asteroidCollision(int N, vector<int> &asteroids) {
        // code here
        stack<int> s;
        for(auto x:asteroids){
            if(s.empty()){
                s.push(x);
            }
            else{
               if(x>0){
                   s.push(x);
               }
               else{
                   while(!s.empty() && s.top()>0 && s.top()<abs(x)){
                       s.pop();
                   }
                   if(!s.empty() && s.top() == abs(x)){
                       s.pop();
                       continue;
                   }
                   if(!s.empty() && s.top()>abs(x)){
                       continue;
                   }
                   s.push(x);
               }
            }
        }
        vector<int> ans;
        while(!s.empty()){
            ans.push_back(s.top());
            s.pop();
        }
        reverse(ans.begin(),ans.end());
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

        vector<int> asteroids(N);
        for (int i = 0; i < N; i++) cin >> asteroids[i];

        Solution obj;
        vector<int> ans = obj.asteroidCollision(N, asteroids);
        for (auto &it : ans) cout << it << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends