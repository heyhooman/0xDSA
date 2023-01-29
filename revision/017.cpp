/* Peak element
 */

/* The function should return the index of any
   peak element present in the array */

// arr: input array
// n: size of array
class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
        for(int i=1;i<n-1;i++){
           if(arr[i]>=arr[i-1] && arr[i]>=arr[i+1]) {
               return i;
           }
       }
       
       if(arr[0] >= arr[n-1]) return 0;
       return n-1;
       // Your code here
    }
};
