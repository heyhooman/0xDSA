Count the Number of Fair Pairs

class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        int n=nums.size();
        long long res=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            int start=i+1,end=n-1;
            int temp1=INT_MAX,temp2=INT_MAX;
            while(end>=start){
                long long mid=end+(start-end)/2;
                if(nums[mid]+nums[i]>=lower){
                    temp1=mid;
                    end=mid-1;
                }
                else
                    start=mid+1;
            }
            if(temp1==INT_MAX)
                continue;
            start=temp1,end=n-1;
            while(end>=start){
                long long mid=end+(start-end)/2;
                if(nums[mid]+nums[i]<=upper){
                    temp2=mid;
                start=mid+1;
                }
                else
                    end=mid-1;
            }
            if(temp2==INT_MAX)
                continue;
            res+=(temp2-temp1+1);
        }
        return res;
    }
};
