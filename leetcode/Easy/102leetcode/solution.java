class Solution {
    public List<List<Integer>> levelOrder(TreeNode root) {
        Queue<TreeNode> queue = new LinkedList<TreeNode>();
        List<List<Integer>> lists = new ArrayList<List<Integer>>();

        if(root == null) return lists;

        queue.offer(root);
        while(!queue.isEmpty()){
            int level = queue.size();
            List<Integer> list = new LinkedList<Integer>();
            for(int i = 0; i < level; i++){
                if(queue.peek().left != null) queue.offer(queue.peek().left);
                if(queue.peek().right != null) queue.offer(queue.peek().right);
                list.add(queue.poll().val);
            }
            lists.add(list);
        }

        return lists;
    }
}