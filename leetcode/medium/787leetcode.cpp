Cheapest Flights Within K Stops

class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<int>dist(n,INT_MAX);
        unordered_map<int,vector<pair<int,int>>>adj;
        for(vector<int>&x:flights){
            int u=x[0];
            int v=x[1];
            int cost=x[2];
            adj[u].push_back({v,cost});
        }
        queue<pair<int,int>>q;
        q.push({src,0});
        dist[src]=0;
        int steps=0;
        while(!q.empty() && steps<=k){
            int N=q.size();
            while(N--){
            int node=q.front().first;
            int cost=q.front().second;
            q.pop();
            for(pair<int,int>&x:adj[node]){
                int v=x.first;
                int c=x.second;
                if(dist[v]>cost+c){
                    dist[v]=cost+c;
                    q.push({v,dist[v]});
                }
            }
             }
            steps++;
        }
        return dist[dst]==INT_MAX ? -1 :dist[dst];
    }
};
