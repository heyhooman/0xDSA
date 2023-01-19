Subarray Sums Divisible by K
Given an integer array nums and an integer k, return the number of non-empty subarrays that have a sum divisible by k.

A subarray is a contiguous part of an array.
  
  class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mp;
        int cnt=0,sum=0;
        mp[0]=1;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            int rem=sum%k;
            if(rem<0)
                rem+=k;
            if(mp.count(rem)!=0)
                cnt+=mp[rem];
            mp[rem]++;
        }
        return cnt;
    }
};
