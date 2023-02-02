//491. Non-decreasing Subsequences
class Solution {
    int[] arr;
    HashSet<List<Integer>> sets = new HashSet<>();
    public List<List<Integer>> findSubsequences(int[] nums) {
        arr = nums.clone();
        f(new ArrayList<>(),0);
        List<List<Integer>> result = new ArrayList<>(sets);
        return result;
    }

    public void f(List<Integer> list, int index){
        if(list.size()>=2) sets.add(new ArrayList(list));

        for(int i = index;i<arr.length;i++){
            if(list.size() == 0 || arr[i]>= list.get(list.size()-1)){
                list.add(arr[i]);
                f(list,i+1);
                list.remove(list.size()-1);
            }
        }

    }
}

//TLE
    private void f(int i, int[] nums, List<Integer> list){

        //base case
        
        if(i >= nums.length) {
            if(list.size() >= 2 && !lists.contains(list) && isIncreasing(list) ) lists.add(new ArrayList<>(list));
            return;
        }
        list.add(nums[i]);
        f(i+1, nums, list);
        list.remove(list.size() -1);
        f(i+1, nums, list); 
    }
    private boolean isIncreasing(List<Integer> list){
        for(int i = 1 ; i < list.size(); i++){
            if(list.get(i) < list.get(i-1)) return false;
        }
        return true;
    
    }