Binary Tree Zigzag Level Order Traversal

Given the root of a binary tree, return the zigzag level order traversal of its nodes' values
  . (i.e., from left to right, then right to left for the next level and alternate between).
  
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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        queue<TreeNode*>q;
        if(!root)
            return ans;
        q.push(root);
        int count=1;
        while(!q.empty()){
           int size=q.size();
            count++;
            vector<int>res;
            for(int i=0;i<size;i++){
                TreeNode*temp=q.front();
                q.pop();
                res.push_back(temp->val);
                if(temp->left)
                  q.push(temp->left);
                if(temp->right)
                  q.push(temp->right);
            }
            if(count%2)
                reverse(res.begin(),res.end());
            ans.push_back(res);
        }
        return ans;
    }
};
