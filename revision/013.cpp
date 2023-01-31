/* Check if array is sorted */

class Solution {
  public:
    bool arraySortedOrNot(int arr[], int n) {
        bool ans=false;
        if(n==1||n==0){
            ans =true;
        }

       for(int i =0; i<n; i++){
           if(arr[i]>=arr[i-1] ){
               ans =true;
           }
           else{
               ans=false;
               return ans;
           }
           
       }
       return ans;
        // code here
    }
};
