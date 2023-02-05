//130. Surrounded Regions



class Solution {
    private boolean[][] vis;
    private int n, m;
    private int[] delrow, delcol;
    public void solve(char[][] board) {
        n = board.length;
        m = board[0].length;

        vis = new boolean[n][m];

        delrow = new int[]{-1, 0, 1, 0};
        delcol = new int[]{0, 1, 0, -1};

        for(int i = 0; i < n; i++){
            //left most
            if(!vis[i][0] && board[i][0] == 'O') dfs(i, 0, board);
            //right most
            if(!vis[i][m-1] && board[i][m-1] == 'O') dfs(i, m-1, board);
        }

        for(int i = 0; i < m; i++){
            //up
            if(!vis[0][i] && board[0][i] == 'O') dfs(0, i, board);
            //down
            if(!vis[n-1][i] && board[n-1][i] == 'O') dfs(n-1, i, board);
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m ; j++){
                if(board[i][j] == 'O' && !vis[i][j]) board[i][j] = 'X';
            }
        }

    }
    private void dfs(int row, int col, char[][] board){
        vis[row][col] = true;

        for(int i = 0; i < 4; i++){
            int nrow = row + delrow[i];
            int ncol = col + delcol[i];
            if(nrow > 0 && ncol > 0 && nrow < n && ncol < m && !vis[nrow][ncol] && board[nrow][ncol] == 'O'){
                dfs(nrow, ncol, board);
            }
        }
    }
}
