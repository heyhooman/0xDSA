Minimum Operations to Make Array Equal II

class Solution {
public:
    long long minOperations(vector<int>& nums1, vector<int>& nums2, int k) {
        int n=nums1.size();
        long long pos=0,neg=0;
        long long dif=0;
        if(k==0){
            if(nums1==nums2)
                return 0;
            return -1;
        }
        for(int i=0;i<n;i++){
            dif=(nums2[i]-nums1[i]);
            if(dif%k)
                return -1;
            if(dif>0)
                pos+=(dif/k);
            if(dif<0)
                neg+=(dif/k);
        }
        if(pos+neg==0)
            return pos;
        return -1;
    }
};
