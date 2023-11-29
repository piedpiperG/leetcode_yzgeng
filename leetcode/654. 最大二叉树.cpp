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
    TreeNode* recursion(vector<int>& nums, int left, int right)
    {
        if (left > right || left < 0 || right < 0)
            return  NULL;
        TreeNode* temp = new TreeNode;
        int ans = left;
        int maxi = INT_MIN;
        for (int i = left; i <= right; i++)
        {
            if (nums[i] > maxi)
            {
                maxi = nums[i];
                ans = i;
            }
        }
        // cout<<"left="<<left<<"right="<<right<<"ans="<<ans<<endl;
        temp->val = maxi;
        temp->left = recursion(nums, left, ans - 1);
        temp->right = recursion(nums, ans + 1, right);
        return  temp;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums)
    {
        int left = 0, right = nums.size() - 1;
        TreeNode* root = new TreeNode;
        root = recursion(nums, left, right);
        return  root;
    }
};
//cout<<"left="<<left<<"right="<<right<<"ans="<<ans<<endl;