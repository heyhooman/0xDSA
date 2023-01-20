Non-decreasing Subsequences
Given an integer array nums, return all the different possible non-decreasing subsequences of the given array
with at least two elements. You may return the answer in any order.
  
  class Solution {
public:
    
    void solve(vector<int>& nums,int idx,vector<int>&cur,vector<vector<int>>&res){
        int n=nums.size();
        if(cur.size()>1)
            res.push_back(cur);
        unordered_set<int>s;
        for(int i=idx;i<n;i++){
         if((cur.empty() || nums[i]>=cur.back()) && (s.find(nums[i])==s.end()))
         {
             cur.push_back(nums[i]);
             solve(nums,i+1,cur,res);
             cur.pop_back();
             s.insert(nums[i]);
         }
        }
    }
    
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<vector<int>>res;
        vector<int>cur;
        solve(nums,0,cur,res);
        return res;
    }
};
