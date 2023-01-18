//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        if(n<=2){
            return 0;
        }
        
        int maxleft = INT_MIN;
        int maxright = INT_MIN;
        long long x = 0;
        int low = 0;
        int high = n-1;
        
        while(low<=high){
            if(arr[low]<=arr[high]){
                if(arr[low]>=maxleft){
                    maxleft = arr[low];
                }
                else{ 
                    x+= maxleft - arr[low];
                }
                low++;
            }
            
            else{
                if(arr[high]>=maxright){ 
                    maxright=arr[high];
                }
                else{ 
                    x+= maxright - arr[high];
                }
                high--;
            }
        }
        return x;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends