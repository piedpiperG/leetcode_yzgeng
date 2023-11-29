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
    bool isUnivalTree(TreeNode* root) 
	{
		TreeNode*	p;
		int	ans=1;//判断，初始值为1，默认为是 
		p=root;
		int	cur=p.val;//用来存储当前结点的值，作比较 
		
		stack<TreeNode>s;//用栈实现dfs
		s.push(p);
		while(s.empty()!=0)
		{
			int	note=0;//判断是否有下层结点 
			if(s.top().left!=NULL)
			{
				s.push(s.top().left);
				note=1;
			}
			else	if(s.top().right!=NULL)
			{
				s.push(s.top().right);
				note=1;
			}
			if(note==0)
			{
				int	nex=s.top().val;
				if(nex!=cur)
					return	false;
				s.pop();
			}
		}//大循环，当栈非空 
		return	true;
    }
};//考察一个树的遍历，这里我们写一个前序遍历（DFS） 
