/* 145. Binary Tree Postorder Traversal */

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
    vector<int> postorderTraversal(TreeNode* root) {
    vector<int> v;
        postorder(root, v);
        return v;
    }
    void postorder(TreeNode* root, vector<int>& v) {
        if (!root) {
            return;
        }
        postorder(root -> left, v);
        postorder(root -> right, v);
        v.push_back(root -> val);
    }
};
