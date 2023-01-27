//2359. Find Closest Node to Given Two Nodes

class Solution {
    private int n;
    private List<List<Integer>> adj = new ArrayList<>();
    public int closestMeetingNode(int[] edges, int node1, int node2) {
        n = edges.length;
        int[] dis1 = new int[n];
        int[] dis2 = new int[n];
        Arrays.fill(dis1, Integer.MAX_VALUE);
        Arrays.fill(dis2, Integer.MAX_VALUE);

        boolean[] vis = new boolean[n];

        for(int i = 0; i < n; i++){
            adj.add(new ArrayList<>());
        }

        for(int i = 0; i < n; i++){
            if(edges[i] == -1) adj.get(i).add(i);
            else adj.get(i).add(edges[i]);
        }

        dfs(node1, dis1, 0, vis);
        Arrays.fill(vis, false);
        dfs(node2, dis2, 0, vis);

        int ans = Integer.MAX_VALUE;
        int idx = -1;
        for(int i = 0; i < n; i++){
            if(ans > Math.max(dis1[i], dis2[i])){
                ans = Math.max(dis1[i], dis2[i]);
                idx = i;
            }
        }
        return idx;
    }
    private void dfs(int i, int[] dis, int d, boolean[] vis){
        vis[i] = true;
        dis[i] = d;
        for(int it : adj.get(i)){
            if(!vis[it]) dfs(it, dis, d+1, vis);
        }
    }
}