//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int findK(vector<vector<int>> &a, int n, int m, int k)
    {
          int total = n*m;
        int count = 0;
        int fRow = 0;
        int lRow = n-1;
        int fCol = 0;
        int lCol = m-1;
        while(count < total){
            for(int i = fCol; count < total && i <= lCol; i++){
                count++;
                if(k == count)
                    return a[fRow][i];
            }
            fRow++;
            for(int i = fRow; count < total && i <=lRow; i++){
                count++;
                if(k == count)
                    return a[i][lCol];
            }
            lCol--;
            for(int i = lCol; count < total && i >= fCol; i--){
                count++;
                 if(k == count)
                    return a[lRow][i];
            }
            lRow--;
            for(int i = lRow; count < total && i >= fRow; i--){
                count++;
                if(k == count)
                    return a[i][fCol];
            }
            fCol++;
        }
        // Your code goes here
    }

};

//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        vector<vector<int>> a(n, vector<int>(m, 0));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }

        Solution obj;

        cout<< obj.findK(a, n, m, k) << "\n";
        
       
    }
}
// } Driver Code Ends
