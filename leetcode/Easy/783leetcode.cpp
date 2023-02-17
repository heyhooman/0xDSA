#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
int ans = INT_MAX;
TreeNode *previous = NULL;
int minDiffInBST(TreeNode *root)
{
    inorder(root);
    return ans;
}
void inorder(TreeNode *node)
{
    if (node == nullptr)
    {
        return;
    }
    inorder(node->left);
    if (previous != nullptr)
    {
        ans = min(ans, abs(node->val - previous->val));
    }
    previous = node;
    inorder(node->right);
}
int main()
{
    TreeNode *root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(6);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);
    cout << minDiffInBST(root);
    return 0;
}
