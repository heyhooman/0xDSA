Minimum Operations to Reduce an Integer to 0
  
  class Solution {
public:
    int minOperations(int n) {
        int ans=0;
        while(n){
            if(n&1==1){
                ans++;
                n/=2;
                if(n&1==1)
                n++;    
            }
            else
                n/=2;
        }
        return ans;
    }
};
