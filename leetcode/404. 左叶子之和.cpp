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
    bool    judgeleaf(TreeNode* root)
    {
        return  !root->left && !root->right;
    }
    int dfs(TreeNode* root)
    {
        int ans = 0;
        if (root->left)
            ans += judgeleaf(root->left) ? root->left->val : dfs(root->left);
        if (root->right)
            ans += dfs(root->right);
        return  ans;
    }
    int sumOfLeftLeaves(TreeNode* root) 
    {
        if (!root)
            return  0;
        return  dfs(root);
    }
};