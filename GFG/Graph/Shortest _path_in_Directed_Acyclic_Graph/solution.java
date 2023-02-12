class Pair {
    int first, second;
    public Pair(int _first, int _second){
        this.first = _first;
        this.second = _second;
    }
}


class Solution {
    
    public ArrayList<ArrayList<Pair>> adj;
    public int[] vis, dis;
    public Stack<Integer> st;
    
	public int[] shortestPath(int N,int M, int[][] edges) {
	    
	    adj = new ArrayList<>();
	    vis = new int[N];
	    
		//making adj list using pair
		for(int i = 0; i < N; i++){
		    adj.add(new ArrayList<Pair>());
		}
		
		for(int i = 0; i < M; i++){
		    int u = edges[i][0];
		    int v = edges[i][1];
		    int wt = edges[i][2];
		    
		    adj.get(u).add(new Pair(v, wt));
		}
		
	    // making stack
	    st = new Stack<>();
	    for(int i = 0; i < N; i++){
	        if(vis[i] == 0) dfs(i);
	    }
	    
	    //making dist arr 
	    dis = new int[N];
	    Arrays.fill(dis, (int) (1e9));
	    
	    //starting process
	    
	    dis[0] = 0;
	    while(!st.isEmpty()){
	        int node = st.peek();
	        st.pop();
	        
	        for(int i = 0; i < adj.get(node).size(); i++){
	            int v = adj.get(node).get(i).first;
	            int wt = adj.get(node).get(i).second;
	            
	            if(dis[node] + wt < dis[v]) dis[v] = dis[node] + wt;
	        }
	        
	    }
	    
	    for(int i = 0; i < N; i++){
	       if(dis[i] == (int) (1e9)) dis[i] = -1;
	    }
	    
	    return dis;
	}
	
	public void dfs(int node){
	    vis[node] = 1;
	    
	    for(int i = 0; i < adj.get(node).size(); i++){
	        int v = adj.get(node).get(i).first;
	        if(vis[v] == 0 ) dfs(v);
	    }
	    
	    st.push(node);
	}
}