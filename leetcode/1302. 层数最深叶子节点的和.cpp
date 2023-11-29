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
    int deepestLeavesSum(TreeNode* root)
    {
        if (!root)
            return  0;
        else if (!root->left && !root->right)
            return  root->val;
        int ans = 0;
        queue<TreeNode*>que;
        que.push(root);
        while (!que.empty())
        {
            int n = que.size();
            int temp = 0;
            bool    ok = false;
            for (int i = 0; i < n; i++)
            {
                TreeNode* cur = que.front();
                que.pop();
                if (cur->left)
                {
                    temp += cur->left->val;
                    que.push(cur->left);
                    ok = true;
                }
                if (cur->right)
                {
                    temp += cur->right->val;
                    que.push(cur->right);
                    ok = true;
                }
            }
            if (ok)
                ans = temp;
        }
        return  ans;
    }
};