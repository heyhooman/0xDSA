//542. 01 Matrix

class Node {
    int r;
    int c;
    int d;
    public Node(int r, int c, int d){
        this.r = r;
        this.c = c;
        this.d = d;
    }
}

class Solution {
    public int[][] updateMatrix(int[][] mat) {
        int n = mat.length;
        int m = mat[0].length;
        int[][] grid = new int[n][m];
        boolean[][] vis = new boolean[n][m];

        Queue<Node> q = new LinkedList<>();

        int[] delrow = new int[]{-1,0,1,0};
        int[] delcol = new int[]{0,1,0,-1};

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(!vis[i][j] && mat[i][j] == 0){
                    q.offer(new Node(i, j, 0));
                    vis[i][j] = true;
                }
            }
        }

        while(!q.isEmpty()){
            Node last = q.poll();
            int row = last.r;
            int col = last.c;
            int dis = last.d;

            grid[row][col] = dis;

            for(int i = 0; i < 4; i++){
                int nrow = row + delrow[i];
                int ncol = col + delcol[i];
                if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && !vis[nrow][ncol]){
                    vis[nrow][ncol] = true;
                    q.offer(new Node(nrow, ncol, dis+1));
                }
            }
        }
        return grid;

    }
}