/* Search in Rotated Array 2 */

class Solution {
  public:
    bool Search(int N, vector<int>& A, int Key) {
        bool ans=false;
        for(int i=0; i<A.size(); i++){
            if(A[i]==Key){
            ans=true;
            }
        }
        return ans;
        // Code here
    }
};
