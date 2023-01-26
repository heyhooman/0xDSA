Find Closest Node to Given Two Nodes

class Solution {
public:
    void dfs(int cur,vector<int>& edges,vector<bool>&visited,vector<int>&dist){
        visited[cur]=true;
        int x=edges[cur];
        if(x!=-1 && !visited[x]){
            visited[x]=true;
            dist[x]=1+dist[cur];
            dfs(x,edges,visited,dist);
        }
        return;
    }
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        int n=edges.size();
        vector<bool>visited(n,false);
        vector<int>dist1(n,INT_MAX),dist2(n,INT_MAX);
        dist1[node1]=0;
        dist2[node2]=0;
        dfs(node1,edges,visited,dist1);
        vector<bool>v(n,false);
        dfs(node2,edges,v,dist2);
        int maxi=INT_MAX;
        int node=-1;
        for(int i=0;i<n;i++){
            int maxd=max(dist1[i],dist2[i]);
            if(maxi>maxd){
                maxi=maxd;
                node=i;
            }
        }
        return  node;
    }
};
