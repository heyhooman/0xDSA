Capacity To Ship Packages Within D Days

A conveyor belt has packages that must be shipped from one port to another within days days.

The ith package on the conveyor belt has a weight of weights[i]. Each day, we load the ship with packages on the
conveyor belt (in the order given by weights). We may not load more weight than the maximum weight capacity of the ship.

Return the least weight capacity of the ship that will result in all the packages on the conveyor belt being shipped within days days.
  
  class Solution {
public:
    
    bool solve(vector<int>& weights, int days,int capacity){
        int sum=0;
        int count=1;
        for(int i=0;i<weights.size();i++){
         if(sum+weights[i]<=capacity)
             sum+=weights[i];
            else
            {
                sum=weights[i];
                count++;
            }  
        }
        return count<=days;
    }
    
    int shipWithinDays(vector<int>& weights, int days) {
        int end=0;
       int start=0;
        for(auto x:weights){
             end+=x;
            start=max(start,x);
        }
        while(start<end){
            int mid=start+(end-start)/2;
            if(solve(weights,days,mid))
                end=mid;
            else
                start=mid+1;
        }
        return start;
    }
};
