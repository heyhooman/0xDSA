Minimum Absolute Difference in BST

Given the root of a Binary Search Tree (BST), 
return the minimum absolute difference between the values 
of any two different nodes in the tree.
  
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
    void inorder(TreeNode*root){
        if(!root)
        return;
        inorder(root->left);
        if(prev!=-1){
            res=min(res,root->val-prev);
        }
        prev=root->val;
        inorder(root->right);
    }
    
    int getMinimumDifference(TreeNode* root) {
        inorder(root);
        return res;
    }
};
