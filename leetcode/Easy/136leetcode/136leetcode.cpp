/* 136. Single Number

Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space. */

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n= nums.size();
        if(n==0){
            return 0;
        }
        if(n==1){
            return nums[0] ;
        }
        sort(nums.begin(), nums.end());
        for(int i=0; i<n; i=i+2){
            if(nums[i]!=nums[i+1]){
                return nums[i];
            }
        }
        return 0;
    }
};
