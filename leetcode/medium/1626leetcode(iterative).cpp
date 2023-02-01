Best Team With No Conflicts

class Solution {
public:
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        int n=ages.size();
        vector<pair<int,int>>res;
        int ans=0;
        vector<int>dp(n);
        for(int i=0;i<n;i++){
            res.push_back({ages[i],scores[i]});
        }
        sort(res.begin(),res.end());
        for(int i=0;i<n;i++){
            dp[i]=res[i].second;
            for(int j=0;j<i;j++){
                if(res[j].second<=res[i].second){
                    dp[i]=max(dp[i],dp[j]+res[i].second);
                }
            }
            if(dp[i]>ans)
                ans=dp[i];
        }
        return ans;
    }
};
