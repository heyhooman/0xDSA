class Solution {
    public int minSubArrayLen(int target, int[] nums) {
        int size = (int) 1e9, start = 0, sum = 0;
        for(int i = 0; i < nums.length; i++){
            sum += nums[i];
            while(sum >= target){
                size = Math.min(size, (i-start) + 1);
                sum -= nums[start];
                start++;
            }
        }
        return size != (int) 1e9 ? size : 0;
    }
}