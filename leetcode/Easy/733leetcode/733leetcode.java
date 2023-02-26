// Flood fill

//using bfs
class Solution {
    private int n, m;
    private boolean[][] visit;
    private int[] delrow, delcol;
    public int[][] floodFill(int[][] image, int sr, int sc, int color) {
        n = image.length;
        m = image[0].length;
        visit = new boolean[n][m];
        delrow = new int[]{-1,0,1,0};
        delcol = new int[]{0,1,0,-1};
        bfs(sr*m + sc, image);
        int[][] mat = new int[n][m];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(visit[i][j]) mat[i][j] = color;
                else mat[i][j] = image[i][j];
            }
        }
        return mat;
    }
    private void bfs(int s, int[][] grid){

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
                if(nrow >= 0 && ncol >= 0 && nrow < n && ncol < m && !visit[nrow][ncol] && grid[nrow][ncol] == grid[row][col]){
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
    public int[][] floodFill(int[][] image, int sr, int sc, int color) {
        n = image.length;
        m = image[0].length;
        visit = new boolean[n][m];
        delrow = new int[]{-1,0,1,0};
        delcol = new int[]{0,1,0,-1};
        dfs(sr,sc,image);
        int[][] mat = new int[n][m];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(visit[i][j]) mat[i][j] = color;
                else mat[i][j] = image[i][j];
            }
        }
        return mat;
    }
    private void dfs(int row, int col, int[][] grid){

        visit[row][col] = true;
        for(int i = 0; i < 4; i++ ){
            int nrow = row + delrow[i];
            int ncol = col + delcol[i];
            if(nrow >= 0 && ncol >= 0 && nrow < n && ncol < m && !visit[nrow][ncol] && grid[nrow][ncol] == grid[row][col]){
                visit[nrow][ncol] = true;
               dfs(nrow, ncol, grid);
            }
        }
    }
}