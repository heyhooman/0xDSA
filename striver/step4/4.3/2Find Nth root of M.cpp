//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int NthRoot(int n, int m)
	{      int s=1,e=m;
	if(m==1){
	    return 1;
	}
        while(s<=e){
            int mid=(s+e)/2;
            if(pow(mid,n)==m){
                return mid;
            }
            else if(pow(mid,n)<m){
                s=mid+1;
            }
            else{
                e=mid-1;
            }

        }

        return -1;


	    // Code here.
	}  
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		Solution ob;
		int ans = ob.NthRoot(n, m);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int NthRoot(int n, int m)
	{      int s=1,e=m;
	if(m==1){
	    return 1;
	}
        while(s<=e){
            int mid=(s+e)/2;
            if(pow(mid,n)==m){
                return mid;
            }
            else if(pow(mid,n)<m){
                s=mid+1;
            }
            else{
                e=mid-1;
            }

        }

        return -1;


	    // Code here.
	}  
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		Solution ob;
		int ans = ob.NthRoot(n, m);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends