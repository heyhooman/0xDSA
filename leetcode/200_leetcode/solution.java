//200. Number of Islands

//using bfs
class Solution {
    private int n, m;
    private boolean[][] visit;
    private int[] delrow, delcol;
    public int numIslands(char[][] grid) {
        n = grid.length;
        m = grid[0].length;
        int count = 0;
        visit = new boolean[n][m];
        delrow = new int[]{-1,0,1,0};
        delcol = new int[]{0,1,0,-1};
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(!visit[i][j] && grid[i][j] == '1'){
                    bfs(i*m + j, grid);
                    count++;
                }
            }
        }
        return count;
    }

    private void bfs(int s, char[][] grid){

        Queue<Integer> q = new LinkedList<>();
        q.offer(s);

        visit[s/m][s%m] = true;

        while(!q.isEmpty()){
            int k = q.poll();
            int row = k/m;
            int col = k%m;
            

            for(int i = 0; i < 4; i++ ){
                int nrow = row + delrow[i];
                int ncol = col + delcol[i];
                if(nrow >= 0 && ncol >= 0 && nrow < n && ncol < m && !visit[nrow][ncol] && grid[nrow][ncol] == '1'){
                    visit[nrow][ncol] = true;
                    q.offer(nrow*m + ncol);
                }
            }
        }

    }
}


//using dfs
class Solution {
    private int n, m;
    private boolean[][] visit;
    private int[] delrow, delcol;
    public int numIslands(char[][] grid) {
        n = grid.length;
        m = grid[0].length;
        int count = 0;
        visit = new boolean[n][m];
        delrow = new int[]{-1,0,1,0};
        delcol = new int[]{0,1,0,-1};
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(!visit[i][j] && grid[i][j] == '1'){
                    dfs(i*m + j, grid);
                    count++;
                }
            }
        }
        return count;
    }

    private void dfs(int s, char[][] grid){
        int row = s/m;
        int col = s%m;
        
        visit[row][col] = true;
        for(int i = 0; i < 4; i++ ){
            int nrow = row + delrow[i];
            int ncol = col + delcol[i];
            if(nrow >= 0 && ncol >= 0 && nrow < n && ncol < m && !visit[nrow][ncol] && grid[nrow][ncol] == '1'){
               dfs(nrow*m + ncol, grid);
            }
        }

    }
}