// 1519. Number of Nodes in the Sub-Tree With the Same Label

class Solution {
    private int[] ans;
    private List<List<Integer>> adj;
    boolean[] isVisited;
    public int[] countSubTrees(int n, int[][] edges, String labels) {
        //making graph
        ans = new int[n];
        adj = new ArrayList<>();
        isVisited = new boolean[n];
        for(int i = 0; i < n; i++){
            adj.add(new ArrayList<>());
        }
        for(int[] edge : edges){
            adj.get(edge[0]).add(edge[1]);
            adj.get(edge[1]).add(edge[0]);
        }
        boolean[] isVisited = new boolean[n];

        //DFS approach         
        DFS(0, labels);


        return ans;
    }

    private int[] DFS(int node, String labels){
        isVisited[node] = true;
        
        int[] count = new int[26];

        //visit every adjacency matrix index (row wise)
        for(int i : adj.get(node)){
            //verify if it's not visited
            if(!isVisited[i]){
                int[] charCount = DFS(i, labels);
                for(int j = 0; j< 26; j++){
                    count[j] += charCount[j];
                }
            }
        }

        //which char is same, go to that index and +1
        char ch = labels.charAt(node);
        count[ch-'a']++;

        ans[node] = count[ch - 'a'];

        return count;
    }
}
