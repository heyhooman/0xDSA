class Solution {
    public int min = Integer.MAX_VALUE;
    public Integer prev = null;
    public int minDiffInBST(TreeNode root) { 
        if(root.left != null) minDiffInBST(root.left);
        if(prev != null) min = Math.min(min, Math.abs(prev - root.val));
        prev = root.val;
        if(root.right != null) minDiffInBST(root.right);
        return min;
    }

}