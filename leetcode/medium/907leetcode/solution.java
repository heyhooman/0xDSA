class Solution {
    public int sumSubarrayMins(int[] arr) {
        int n = arr.length;
        ArrayDeque<Integer> s1 = new ArrayDeque<>();
        ArrayDeque<Integer> s2 = new ArrayDeque<>();

        //element distance form next and previous smaller element
        int[] pre_ele = new int[n];
        int[] next_ele = new int[n];

        for(int i = 0; i < n; i++){
            pre_ele[i] = i;
            next_ele[i] = n - i - 1;
        }

        for(int i = 0; i < n; i++){
            while(!s1.isEmpty() && arr[s1.peek()] > arr[i]){
                next_ele[s1.peek()] = i - s1.peek() -1;
                s1.pop();
            }
            s1.push(i);
        }

        for(int i = n-1; i >= 0; i--){
            while(!s2.isEmpty() && arr[s2.peek()] >= arr[i]){
                pre_ele[s2.peek()] = s2.peek()-i-1;
                s2.pop();
            }
            s2.push(i);
        }

        long ans = 0;
        long mod = (long) (1e9 + 7);

        for(int i = 0; i < n  ; i++){
            ans = ans + arr[i] * (long)((pre_ele[i] + 1)*(next_ele[i] + 1));
            ans %= mod;
        }
        return (int) ans;
    }
}
