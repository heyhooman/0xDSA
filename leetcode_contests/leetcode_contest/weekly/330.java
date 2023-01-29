//Count Distinct Numbers on Board

class Solution {
    public int distinctIntegers(int n) {
        boolean[] vis = new boolean[n];
        int count = 0;
        for(int i = n; i > 1; i--){
            for(int j = 1; j < i; j++){
                if(i % j == 1 && !vis[j]) {
                    count++;
                    vis[j] = true;
                }
            }
        }
                
        return count+1;
    }
}

//2550. Count Collisions of Monkeys on a Polygon


class Solution {
    public int monkeyMove(int n) {
        long res = 1, base = 2, mod = (long)1e9 + 7;
        while (n > 0) {
            if (n % 2 == 1)
                res = res * base % mod;
            base = base * base % mod;
            n >>= 1;
        }
        return (int)((res - 2 + mod) % mod);
    }
}
    
//2551. Put Marbles in Bags

class Solution {
    public long putMarbles(int[] weights, int k) {
        int n = weights.length;
        int[] arr = new int[n-1];
        for(int i = 0; i < n-1; i++){
            arr[i] = weights[i] + weights[i+1];
        }
        Arrays.sort(arr);
        long res = 0;
        for(int i = 0; i < k -1; i++){
            res += arr[arr.length - 1 -i] - arr[i];
        }
        return res;
    }
}
