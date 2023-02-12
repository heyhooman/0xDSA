/* 101. Symmetric Tree

Given the root of a binary tree, check whether it is a mirror of itself (i.e., symmetric around its center). */
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
 bool symmetric(TreeNode* p, TreeNode* q) {
        if(!p && !q){
            return true;
        }
        else if(!p || !q){
            return false;
        }
        if(p->val != q->val){
            return false;
        }
        return symmetric(p->left,q->right) && symmetric(p->right, q->left); 
    }
    bool isSymmetric(TreeNode* root) {
        if (!root){
            return true;
        }
        return symmetric(root->left, root->right);
    }
};
