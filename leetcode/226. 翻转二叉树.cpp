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
	void	reverse(TreeNode*	root)
	{
		TreeNode *temp = root->left;
        root->left = root->right;
        root->right = temp;
	}
	void	order(TreeNode*	root)
	{
        if(root)
        {
		    if(root->left)
		    {
			    reverse(root);
			    order(root->right);
			    order(root->left);
		    }
        }
	}
    TreeNode* invertTree(TreeNode* root) 
	{
		order(root);
        return  root;
    }
};
