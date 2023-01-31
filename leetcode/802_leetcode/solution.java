class Solution {
    private int v;
    private int[] vis, pathVis, check;
    private List<Integer> list;

    public List<Integer> eventualSafeNodes(int[][] graph) {
        v = graph.length;

        vis = new int[v];
        pathVis = new int[v];
        check = new int[v];

        list = new ArrayList<Integer>();

        for(int i = 0; i < v; i++){
            if(vis[i] == 0){
                dfs(i, graph);
            }
        }
        for(int i = 0; i < v; i++){
            if(check[i] == 1) list.add(i);
        }
        return list;
    }

    private boolean dfs(int idx, int[][] adj){
        check[idx] = 0;
        vis[idx] = 1;
        pathVis[idx] =1 ;

        for(int it : adj[idx]){
            if(vis[it] == 0){
                if(dfs(it, adj)) return true;
            }else{
                if(pathVis[it] == 1) return true;
            }
        }

        check[idx] = 1;
        pathVis[idx] = 0;
        return false;
    }
}