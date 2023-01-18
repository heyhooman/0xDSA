class Orange {
    int row;
    int col;
    int time;
    public Orange(int row, int col, int time) {
        this.row = row;
        this.col = col;
        this.time = time;
    }
}

class Solution {
    public int orangesRotting(int[][] grid) {
        int m = grid.length, n = grid[0].length;

        Queue<Orange> q = new LinkedList<>();
        int[][] visited = new int[m][n];

        int fresh = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 2) {
                    q.offer(new Orange(i, j, 0));
                    visited[i][j] = 2;
                }

                if (grid[i][j] == 1) fresh++;
            }
        }

        int time = 0;
        int spoiled = 0;

        int[] rowDir = {1, -1, 0, 0};
        int[] colDir = {0, 0, 1, -1};

        while (!q.isEmpty()) {
            Orange o = q.poll();
            int r = o.row;
            int c = o.col;
            int t = o.time;

            time = Math.max(time, t);

            for (int i = 0; i < 4; i++) {
                int nRow = r + rowDir[i];
                int nCol = c + colDir[i];

                if (nRow >= 0 && nRow < m && nCol >= 0 && nCol < n &&
                    visited[nRow][nCol] != 2 && grid[nRow][nCol] == 1) {
                    q.offer(new Orange(nRow, nCol, t + 1));
                    visited[nRow][nCol] = 2;
                    spoiled++;
                }
            }

        }

        return spoiled == fresh ? time : -1;
    }
}