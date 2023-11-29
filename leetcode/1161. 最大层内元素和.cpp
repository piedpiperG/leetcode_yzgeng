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
    int maxLevelSum(TreeNode* root) 
    {
        int ans = 0;
        int floor = 0;
        int floorsum = 0;
        int temp = INT_MIN;
        queue<TreeNode*>que;
        TreeNode* cur = root;
        TreeNode* nex;
        que.push(cur);
        int count = 0;
        int notice = 1;
        int judgeout = 0;
        while (!que.empty())
        {
            cur = que.front();
            que.pop();
            floorsum += cur->val;
            if (++count == notice)
            {
                count = 0;
                floor++;
                if (floorsum > temp)
                {
                    temp = floorsum;
                    ans = floor;
                }
                floorsum = 0;
                if (judgeout == notice * 2)
                    break;
                judgeout = 0;
                notice *= 2;
            }
            if (cur->left)
            {
                nex = cur->left;
                que.push(nex);
            }
            else
            {
                nex = new TreeNode;
                nex->val = 0;
                que.push(nex);
                judgeout++;
            }
            if (cur->right)
            {
                nex = cur->right;
                que.push(nex);
            }
            else
            {
                nex = new TreeNode;
                nex->val = 0;
                que.push(nex);
                judgeout++;
            }
        }
        return  ans;
    }
};