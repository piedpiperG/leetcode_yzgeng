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
    vector<vector<int>> levelOrder(TreeNode* root) 
    {
    	vector<vector<int>>ans(12,vector<int>(12));
        quene<TreeNode*>qu;
		TreeNode*	cur,nex;
		qu.push(root);
		int count=0;
		while(!qu.empty())
		{
			cur=qu.front();
			qu.pop();
			ans[count++]=cur->val;
			if(cur->left)
			{
				nex=cur->left;
				qu.push(nex);
			}
			if(cur->right)
			{
				nex=cur->right;
				qu.push(nex);
			}
			
		}
		return ans; 
    }
};
