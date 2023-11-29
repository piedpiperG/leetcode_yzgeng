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
		int	ans=1;//�жϣ���ʼֵΪ1��Ĭ��Ϊ�� 
		p=root;
		int	cur=p.val;//�����洢��ǰ����ֵ�����Ƚ� 
		
		stack<TreeNode>s;//��ջʵ��dfs
		s.push(p);
		while(s.empty()!=0)
		{
			int	note=0;//�ж��Ƿ����²��� 
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
		}//��ѭ������ջ�ǿ� 
		return	true;
    }
};//����һ�����ı�������������дһ��ǰ�������DFS�� 
