// 78. Subsets


class Solution {
    HashSet<List<Integer>> set = new HashSet<>();
    int[] arr;
    int n;
    public List<List<Integer>> subsets(int[] nums) {
        arr = nums.clone();
        n = nums.length;
        f(0, new ArrayList<Integer>());
        List<List<Integer>> lists = new ArrayList<>(set);
        return lists;
    }
    private void f(int index, List<Integer> list){
        //base case
        if(index >= n){
            set.add(new ArrayList<>(list));
            return;
        }

        list.add(arr[index]);
        f(index+1, list);
        list.remove(list.size() -1);
        f(index+1, list);
    }
}