//918. Maximum Sum Circular Subarray


class Solution {
    public int maxSubarraySumCircular(int[] nums) {
        int max1 = f(nums);
        int sum = 0;

        for(int i = 0; i < nums.length; i++){
            sum += nums[i];
            nums[i] = -nums[i];
        }

        int max2 = f(nums) + sum;

        if(max2 == 0) return max1;

        return Math.max(max1,max2);

    }
    private int f(int[] nums){
        int max = Integer.MIN_VALUE, sum = 0;
        for(int i = 0; i < nums.length; i++){
            sum += nums[i];
            max = Math.max(sum, max);
            if(sum < 0) sum = 0;
        }
        return max;        
    }
}