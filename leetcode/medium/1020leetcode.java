//1020. Number of Enclaves

class Solution {

    private int n, m;
    private int[] delrow, delcol;
    private boolean[][] vis;

    public int numEnclaves(int[][] grid) {
        n = grid.length;
        m = grid[0].length;

        vis = new boolean[n][m];

        delrow = new int[]{-1,0,1,0};
        delcol = new int[]{0,1,0,-1};

        for(int i = 0; i < n; i++){
            if(grid[i][0] == 1 && !vis[i][0]) dfs(i, 0, grid);
            if(grid[i][m-1] == 1 && !vis[i][m-1]) dfs(i, m-1, grid);
        }

        for(int i = 0; i < m; i++){
            if(grid[0][i] == 1 && !vis[0][i]) dfs(0, i, grid);
            if(grid[n-1][i] == 1 && !vis[n-1][i]) dfs(n-1, i, grid);
        }

        int count = 0; 

        for(int i = 0; i < n; i++){
            for(int j = 0 ; j < m; j++){
                if(grid[i][j] == 1 && !vis[i][j]) count++;
            }
        }

        return count;
    }

    private void dfs(int row, int col, int[][] grid){
        vis[row][col] = true;

        for(int i = 0; i < 4; i++){
            int nrow = row + delrow[i];
            int ncol = col + delcol[i];
            if(nrow > 0 && ncol > 0 && nrow < n && ncol < m && !vis[nrow][ncol] && grid[nrow][ncol] == 1){
                dfs(nrow, ncol, grid);
            }
        }
    }
}