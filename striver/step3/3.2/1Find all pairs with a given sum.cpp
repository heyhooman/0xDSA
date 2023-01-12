//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    vector<pair<int,int>> allPairs(int A[], int B[], int N, int M, int X)
    {
        sort(A,A+N);

        sort(B,B+M);

        vector<pair<int,int>>v;

        for(int i=0;i<N;i++){

            for(int j=0;j<M;j++){

                if(A[i]+B[j]==X){

                    v.push_back(make_pair(A[i],B[j]));

                }

            }

        }

        sort(v.begin(),v.end());

        if(v.size()==0){

            v.push_back(make_pair(0,0));

        }

        return v;
        
        
        // Brute --> O(n*m) 
        // vector<pair<int,int>> ans;
        // int j=0;
        // for(int i=0; i<N; i++){
        //     while(j<M){
        //         if(A[i]+B[j]==X){
        //             ans.push_back(make_pair(A[i], B[j]));
        //             j++;
        //         }
        //     }
        // }
        //     sort(ans.rbegin(), ans.rend());
            
        //     return ans;

        // Your code goes here   
    }
};


//{ Driver Code Starts.
int main() {
	long long t;
	cin >> t;
	
	while(t--){
	    int N, M, X;
	    cin >> N >> M >> X;
        int A[N], B[M];
        
	    for(int i = 0;i<N;i++)
	        cin >> A[i];
	    for(int i = 0;i<M;i++)
	        cin >> B[i];
	        
	   Solution ob;
	   vector<pair<int,int>> vp = ob.allPairs(A, B, N, M, X);
	   int sz = vp.size();
        if(sz==0)
        cout<<-1<<endl;
        else{
            for(int i=0;i<sz;i++){
                if(i==0)
                cout<<vp[i].first<<" "<<vp[i].second;
                else
                cout<<", "<<vp[i].first<<" "<<vp[i].second;
            }
            cout<<endl;
        }
	}
	return 0;
}
// } Driver Code Ends