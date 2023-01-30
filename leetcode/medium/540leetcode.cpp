/* 540. Single Element in a Sorted Array

You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once.

Return the single element that appears only once.

Your solution must run in O(log n) time and O(1) space. */

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n= nums.size(); 
        if(n==1){
            return nums[0];
        }
        for(int i=0; i<n; i+=2){
            if(nums[i]!=nums[i+1]){
                return nums[i];
            }
        }
        return -1;
    }
};
