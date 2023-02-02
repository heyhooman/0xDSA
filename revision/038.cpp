/* Count Digits */

//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int evenlyDivides(int N){
        int w=N,count=0;
        while(w){
            if((w%10) && !(N%(w%10))){
                count++;
            }
            w/=10;
        }
        return count;
       /* int count =0;
        int rem;
        while(N>0){
            rem=N%10;
            if(rem!=0 && N%(rem%10)==0){
                count++;
            }
            N=N/10;
        }
       /* string x = to_string(N);
        int y= x.length();
        for(int i=0; i<y; i++){
            int z= N/(10*(10)^i);
            if(N%z==0){
                count++;
            }
        }
       */ /*int x = N/10;
        int y= N%10;
        
        if(N%x == 0){
            count++;
            
        }
        if(N%y ==0){
            count++;
        
        }
        */
        
      /*  return count;*/
        //code here
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends
