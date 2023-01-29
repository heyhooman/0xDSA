/* Binary Search */
class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        int s=0; 
        int e=n;
        int mid;
        while(e>=s){
            mid=(s+e)/2;
            if(arr[mid]==k){
                return mid;
                
            }
            if(arr[mid]>k){
                e=mid-1;
                
            }
            else if(arr[mid]<k){
                s=mid+1;
            }
            
            }
            return -1;
        
        // code here
    }
};
