Minimum Common Value

class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>s;
        for(auto x:nums1)
            s.insert(x);
        sort(nums2.begin(),nums2.end());
        for(int i=0;i<nums2.size();i++){
            if(s.find(nums2[i])!=s.end())
                return nums2[i];
        }
        return -1;
    }
};
