/* 35. Search Insert Position

Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.
 */

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s=0; 
        int n= nums.size();
        int e= n-1;
        int mid;
        while(e>=s){
            mid=(s+e)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                e=mid-1;
            }
            else{
                s= mid+1;
            }
        }
        return s;
    }
};
