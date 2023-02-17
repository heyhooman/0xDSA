Minimum Distance Between BST Nodes

Given the root of a Binary Search Tree (BST), return the minimum difference
between the values of any two different nodes in the tree.
  
  /**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int prev=-1;
    int res=1e6;
    void solve(TreeNode* root){ //inorder traversal for sorted way of getting nodes
        if(!root)
            return;
        solve(root->left);
        if(prev!=-1){
            res=min(res,root->val-prev);
        }
        prev=root->val;
        solve(root->right);
    }
    int minDiffInBST(TreeNode* root) {
        solve(root);
        return res;
    }
};
