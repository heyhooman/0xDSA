Subarray Sum Equals K

Given an array of integers nums and an integer k,
return the total number of subarrays whose sum equals to k.

A subarray is a contiguous non-empty sequence of elements within an array.

  class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mp;
        int count=0;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(sum==k)
                count++;
            if(mp.find(sum-k)!=mp.end())
                count+=(mp[sum-k]);
            mp[sum]++;
        }
        return count;
    }
};
 
