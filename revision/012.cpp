/* Search insert position of K in a sorted array */

class Solution{
    public:
    int searchInsertK(vector<int>Arr, int N, int k)
    {
        for(int i=0; i<N; i++){
            
            if(Arr[i]>=k){
                return i;
            }
        }
        // code here
    }
};
