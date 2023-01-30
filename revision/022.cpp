/* Search in a matrix */

class Solution{
public:	
	int matSearch (vector <vector <int>> &mat, int n, int m, int x)
	{
	    int i=0, j=m-1;
	    while(j>=0 && i<n){
	        if(mat[i][j]==x){
	            return 1;
	        }
	        else if(mat[i][j]<x){
	            ++i;
	        }
	        else if(mat[i][j]>x){
	            --j;
	        }
	    }
	    return 0;
	    // your code here
	}
};
