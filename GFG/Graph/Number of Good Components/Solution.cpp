class Solution {
  public:
  int e=0,v=0;
  
  void dfs(int i,vector<vector<int>>& adj,vector<bool>&vis){
      vis[i]=true;
      v++;
      e+=adj[i].size();
  for(auto x:adj[i]){
      if(!vis[x]){
          dfs(x,adj,vis);
      }
  }
  }
  
    int findNumberOfGoodComponent(int V, vector<vector<int>>& adj) {
        // code here
        vector<bool>vis(V+1,false);
        int count=0;
        for(int i=1;i<=V;i++){
            e=0,v=0;
            if(!vis[i]){
                dfs(i,adj,vis);
            if(e==(v*(v-1)))
            count++;
            }
        }
        return count;
    }
};