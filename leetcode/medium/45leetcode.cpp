Jump Game II

class Solution {
public:
    int t[10001];
    int solve(int idx,vector<int>& nums){
        if(idx>=(nums.size()-1))
            return 0;
        int mini=1e6;
        if(t[idx]!=-1)
            return t[idx];
        for(int i=1;i<=nums[idx];i++){
            mini=min(mini,1+solve(idx+i,nums));
        }
        return t[idx]=mini;
    }
    
    int jump(vector<int>& nums) {
        memset(t,-1,sizeof(t));
        int n=nums.size();
        return solve(0,nums);
    }
};
