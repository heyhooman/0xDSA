/* 70. Climbing Stairs

You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?
 */

class Solution {
public:    
    int climbStairs(int n) {
        int  x = 1;
        int y = 1;
        for(int i=2; i<=n; i++){
            int current = x+y;
            x=y;
            y=current;
        }        
        return y;
        // if (n > 1){
        //    return climbStairs(n - 2) + climbStairs(n - 1);                 
        // }
        // else{
        //     return 1;
        // }
    }
};
