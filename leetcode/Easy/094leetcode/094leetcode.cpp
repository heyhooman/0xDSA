/* 94. Binary Tree Inorder Traversal

Given the root of a binary tree, return the inorder traversal of its nodes' values. */

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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v;
        if(!root){
            return v;
        }
        stack<TreeNode *> stk;
        stk.push(root);
        while(!stk.empty()){
            TreeNode *node = stk.top();
            if(node->left){
                stk.push(node->left);
                node->left = NULL;
            }
            else{
                v.push_back(node->val);
                stk.pop();
                if(node->right)
                stk.push(node->right);
            }
        }
        return v;     
    }
    
};
