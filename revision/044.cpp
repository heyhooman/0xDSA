/* Graph and Vertices */

class Solution {
  public:
    long long count(int n) {
        // your code here
        int x = n*(n-1)/2;
        long long ans = pow(2,x);
        return ans;
    
    }
};
