/* 509. Fibonacci Number */


class Solution {
public:
    int fib(int n) {
        if(n < 2)
            return n;
        int ans[n+1];
        ans[0] = 0;
        ans[1] = 1;
        for(int i=2; i<=n; i++){
            ans[i] = ans[i-1] + ans[i-2];
        }   
        return ans[n];
        //OR
    //   if(n== 0){
    //       return 0;
    //   }
    //   if(n== 1){
    //       return 1;
    //   }
    //   return fib(n-1) + fib(n-2);
    }
};
