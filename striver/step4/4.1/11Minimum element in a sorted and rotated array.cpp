//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int findMin(int arr[], int n){
        //complete the function here
        sort(arr, arr+n);
        return arr[0];
        //OR
        // int x= INT_MAX;
        // int i=0;
        // while(i<n){
        //     if(arr[i]<x){
        //         x=arr[i];
        //     }
        //     i++;
        // }
        // return x;
    }
};

//{ Driver Code Starts.


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution ob;
		cout<<ob.findMin(a, n)<<endl;
	}
	return 0;
}
// } Driver Code Ends