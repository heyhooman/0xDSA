class Solution {
    public int min = Integer.MAX_VALUE;
    public Integer prev = null;
    public int getMinimumDifference(TreeNode root) {
        if(root.left != null) getMinimumDifference(root.left);
        if(prev != null) min = Math.min(min, Math.abs(prev - root.val));
        prev = root.val;
        if(root.right != null) getMinimumDifference(root.right);
        return min;
    }
}