/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists)
    {
        ListNode* root = new    ListNode;
        ListNode* nexroot = new    ListNode;
        root->next = nexroot;
        bool    ok = true;//ÅÐ¶ÏÌø³öÌõ¼þ
        while (ok)
        {
            ListNode* templis = new ListNode;
            templis->val = INT_MAX;
            int notice = -1;
            for (int i = 0; i < lists.size(); i++)
            {
                if (lists[i] == NULL)
                    continue;
                else if (lists[i]->val < templis->val)
                {
                    templis = lists[i];
                    notice = i;
                }
            }    
            if (notice == -1)
                ok = false;
            else
            {
                nexroot->next = templis;
                nexroot = nexroot->next;
                lists[notice] = lists[notice]->next;
            }
        }
        return  root->next->next;
    }
};