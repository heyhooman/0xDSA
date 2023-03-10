//2540. Minimum Common Value
class Solution {
    public int getCommon(int[] nums1, int[] nums2) {
        int i = 0, j = 0;
        
        while( i < nums1.length && j < nums2.length){
            if(nums1[i] == nums2[j]) return nums1[i];
            if(nums1[i] < nums2[j]) i++;
            else j++;
        }
        return -1;
    }
}


//2541. Minimum Operations to Make Array Equal II

class Solution {
    public long minOperations(int[] nums1, int[] nums2, int k) {
        if(nums1 == nums2) return 0;
        if(k == 0){
            for(int i = 0; i < nums1.length; i++){
                if(nums1[i] != nums2[i]) return -1;
            }
            return 0;
        }
        long pos = 0;
        long nag = 0;
        for(int i = 0; i< nums1.length; i++){
            if(nums1[i] == nums2[i]) continue;
            long d = Math.abs(nums1[i] - nums2[i]);
            if(d % k == 0){
                if(nums1[i] > nums2[i]) pos += d/k;
                if(nums1[i] < nums2[i]) nag += d/k;
            }else return -1;
        }
        return pos == nag ? pos : -1;
    }
}

//
