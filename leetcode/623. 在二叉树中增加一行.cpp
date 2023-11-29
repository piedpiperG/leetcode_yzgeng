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
    TreeNode* addOneRow(TreeNode* root, int val, int depth)
    {
        if (depth == 1)
        {
            TreeNode* newroot;
            newroot = new TreeNode;
            newroot->val = val;
            newroot->left = root;
            return  newroot;
        }
        queue<TreeNode*>que;
        que.push(root);
        int floor = 1;
        while (!que.empty())
        {
            int size = que.size();  //这一层队列的大小
            if (++floor == depth)
            {
                TreeNode* newnode[2 * size];
                for (int i = 0; i < 2 * size; i++)
                {
                    newnode[i] = new  TreeNode;
                    newnode[i]->val = val;
                }
                int count = 0;
                for (int i = 0; i < size; i++) //遍历这一层的所有结点
                {
                    TreeNode* cur = que.front();
                    que.pop();
                    TreeNode* nex = cur->left;
                    cur->left = newnode[count];
                    newnode[count++]->left = nex;
                    nex = cur->right;
                    cur->right = newnode[count];
                    newnode[count++]->right = nex;
                }
                break;
            }
            else
            {
                int size = que.size();
                for (int i = 0; i < size; i++)
                {
                    TreeNode* cur = que.front();
                    que.pop();
                    if (cur->left)
                    {
                        que.push(cur->left);
                    }
                    if (cur->right)
                    {
                        que.push(cur->right);
                    }
                }
            }
        }
        return  root;
    }
};