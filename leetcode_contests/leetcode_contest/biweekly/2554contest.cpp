Maximum Number of Integers to Choose From a Range I

class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        vector<bool>vis(n+1,false);
        for(int i=0;i<banned.size();i++){
            if(banned[i]<=n)
            vis[banned[i]]=true;
        }
        int ans=0;
        int sum=0;
        for(int i=1;i<=n;i++){
            if(vis[i]==false && sum+i<=maxSum){
                sum+=i;
                ans++;
            }
            else if(sum>=maxSum)
                break;
        }
        return ans;
    }
};
