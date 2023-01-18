Maximum Sum Circular Subarray
Given a circular integer array nums of length n, return the maximum possible sum of a non-empty subarray of nums.

A circular array means the end of the array connects to the beginning of the array. Formally, the next element of nums[i] is nums[(i + 1) % n] and the previous element of nums[i] is nums[(i - 1 + n) % n].

A subarray may only include each element of the fixed buffer nums at most once. Formally, for a subarray nums[i], nums[i + 1], ..., nums[j], there does not exist i <= k1, k2 <= j with k1 % n == k2 % n.
  
  SOLUTION
  
  class Solution {
public:
    int maxSum(vector<int>& nums){
        int n=nums.size();
        int sum=nums[0],res=nums[0];
        for(int i=1;i<n;i++){
            sum=max(sum+nums[i],nums[i]);
            res=max(res,sum);
        }
        return res;
    }
    int minSum(vector<int>&nums){
        int n=nums.size();
        int sum=nums[0],res=nums[0];
        for(int i=1;i<n;i++){
            sum=min(sum+nums[i],nums[i]);
            res=min(res,sum);
        }
        return res;
    }
    
    int maxSubarraySumCircular(vector<int>& nums) {
        int n=nums.size();
        int totalSum=0;
        for(auto x:nums)
            totalSum+=x;
        if(maxSum(nums)>0)
        return max(maxSum(nums),totalSum-(minSum(nums)));
        return maxSum(nums);
    }
};
