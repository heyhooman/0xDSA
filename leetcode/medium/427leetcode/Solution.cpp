class Solution {
public:
    
    bool allSame(vector<vector<int>>& grid,int x,int y,int n){
        for(int i=x;i<x+n;i++){
            for(int j=y;j<y+n;j++){
                if(grid[i][j]!=grid[x][y])
                    return false;
            }
        }
        return true;
    }
    
    Node*solve(vector<vector<int>>& grid,int x,int y,int n){
        if(allSame(grid,x,y,n))
            return new Node(grid[x][y],true);
        Node*root=new Node(1,false);
        root->topLeft=solve(grid,x,y,n/2);
        root->topRight=solve(grid,x,y+n/2,n/2);
        root->bottomLeft=solve(grid,x+n/2,y,n/2);
        root->bottomRight=solve(grid,x+n/2,y+n/2,n/2);
        return root;
    }
    
    Node* construct(vector<vector<int>>& grid) {
        return solve(grid,0,0,grid.size());
    }
};