/* Square root of a number */
// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        long long int ans = -1;
        int s=0, e = x;
        while(s <= e){
            long long int mid = (s + e)/ 2;
            if (mid*mid <= x){
                ans = mid;
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
        }
        return ans;
        /*long long int y =floor((sqrt(x)));
        return y;*/
        // Your code goes here   
    }
};
