class Solution {
    public boolean containsNearbyDuplicate(int[] nums, int k) {
        HashSet<Integer> set = new HashSet();
        for(int i = 0; i < nums.length; i++){
            if(!set.add(nums[i])) return true;
            if(i >= k) set.remove(nums[i-k]);
        }
        return false;
    }
}

// brute force
class Solution {
    public boolean containsNearbyDuplicate(int[] nums, int k) {
        for(int i = 0; i < nums.length-1; i++){
            for(int j = i+1; j < nums.length; j++){
                if(nums[i] == nums[j] && j-i <= k) return true;
            }
        }
        return false;
    }
}