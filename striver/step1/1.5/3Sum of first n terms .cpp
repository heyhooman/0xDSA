//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
  
  long long int ans = 0 ; 

    long long sumOfSeries(long long N) {

        

        return N*N*(N+1)*(N+1)/4 ;
 /* long long int ans = 0 ; 
    long long sumOfSeries(long long N) {
        if(N==0)
        return ans;
         ans+=(N*N*N);
         sumOfSeries(N-1);
         
          */

      

      

    
      
      /*  long long sum=0;
        if(N==0){
            retrun sum;
        }
        sum= sum +pow(N,3);
        sumOfSeries(N-1);
    */
    
    
    /*    
        for(int i=1; i<=N; i++){
            
            sum = sum + (i)^3;
        
        }
        return sum;*/
    
        // code here
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        cout << ob.sumOfSeries(N) << "\n";
    }
}
// } Driver Code Ends