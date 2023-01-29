/* Floor in a Sorted Array */

class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> v, long long n, long long x){
     
        int s = 0;
        int e = n-1;
        int floor = -1;
        while(e>=s){
            int mid = (s+e)/2;
            if(v[mid]==x){
                return mid;
            }
            else if(v[mid]>x){
                e = mid-1;
            }
            else{
                floor = mid;
                s = mid+1;
            }
        }
        return floor;
        
      /*  // int s=0;
        // int e=n;
        // int mid;
        int i;
          if(x<0||x<v[0]){
                return -1;
            }
          
        for( i=0;i<n;i++){

           if(v[i]>x){
               break;
           }

      }
      return i-1;*/
        
        // Your code here
        
    }
};
