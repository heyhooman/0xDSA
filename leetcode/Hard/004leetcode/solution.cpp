class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double y;
        vector <int>v;
        int n =nums1.size();
        int m= nums2.size();
        for(int i=0; i<m; i++){
            v.push_back(nums2[i]);
        }
        for(int i=0; i<n; i++){
            v.push_back(nums1[i]);
        }
        sort(v.begin(), v.end());
        int x=v.size();
        if(x%2==0){
            y= (v[(x/2)]+v[(x/2)-1])/2.0 ;
        
        }
        else{
            y=v[(x/2)];
        }
        return y;


    }
};
