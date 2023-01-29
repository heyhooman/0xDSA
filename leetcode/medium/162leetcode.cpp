/* 162. Find Peak Element

A peak element is an element that is strictly greater than its neighbors.

Given a 0-indexed integer array nums, find a peak element, and return its index. If the array contains multiple peaks, return the index to any of the peaks.

You may imagine that nums[-1] = nums[n] = -∞. In other words, an element is always considered to be strictly greater than a neighbor that is outside the array.

You must write an algorithm that runs in O(log n) time.
 */

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n= nums.size();
        for(int i=1;i<n-1;++i){
           if(nums[i]>=nums[i-1] && nums[i]>=nums[i+1]){
               return i;
           }
       }
       
       if(nums[0] >= nums[n-1]){
           return 0;
       }
       return n-1;

    }
};
