//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
double MedianOfArrays(vector<int>& array1, vector<int>& array2);


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
         int n=array1.size();

        int m=array2.size();

        int mid=(n+m)/2;

       int i=0;

       int j=0;



     vector<int>arr;

     while(i<n){

         arr.push_back(array1[i]);

         i++;

     }

     while(j<m){

         arr.push_back(array2[j]);

         j++;

     }

     int x=arr.size();
     sort(arr.begin(),arr.end());
     if(x%2!=0)
     return arr[mid];
     double ans= (arr[mid-1]+arr[mid])/2.0;
     return ans;
    /*    vector <int> v;
        int n=array1.size();
        int m=array2.size();
        int i=0, j=0;
        while(i<n){
            v.push_back(i);
            i++;
        }
        while(j<m){
            v.push_back(j);
            j++;
        }
       sort(v.begin(), v.end());
       int x= v.size();
       if(x%2!=0)
       return v[x/2];
       double ans=(v[x/2 -1]+v[x/2])/2.0;
       return ans;
       */
        // Your code goes here
    
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        cin>>n;
        vector<int> array2(n);
        for (int i = 0; i < n; ++i){
            cin>>array2[i];
        }
        Solution ob;
        cout<<ob.MedianOfArrays(array1, array2)<<endl;
    }
    return 0; 
}



// } Driver Code Ends