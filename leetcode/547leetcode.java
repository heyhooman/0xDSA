//Number of Provinces

class Solution {
    private boolean[] visited;
    public int findCircleNum(int[][] isConnected) {
        visited = new boolean[isConnected.length+1];
        int count = 0;
        for(int i = 1; i <= isConnected.length; i++){
            if(!visited[i]){
                count++;
                dfs(i,isConnected);
            }
        }
        return count;
    }

    private void dfs(int node, int[][] isConnected){
        visited[node] = true;
        for(int i = 0; i < isConnected.length; i++){
            if(node-1 != i) {
                if(isConnected[node -1][i] ==1 && !visited[i+1] ){
                    dfs(i+1,isConnected);
                }
            }
        }
    }
}