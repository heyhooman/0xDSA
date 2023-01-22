//1. Two Sum

// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         vector<int> v;
         int n = nums.size();
        for(int i=0;i<n; i++){
            int x =nums[i];
            for(int j=1; j!=i &&j<n; j++){
                int  y=nums[j];
                if((x+y)==target){
                    v.push_back(i);
                    v.push_back(j);
                   return v; 
                }
            }
        }
        return v;
    }
};
