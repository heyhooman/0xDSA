/* Sum of first n terms  */

class Solution {
  public:
  
  long long int ans = 0 ; 

    long long sumOfSeries(long long N) {
        return N*N*(N+1)*(N+1)/4 ;
    }
};
