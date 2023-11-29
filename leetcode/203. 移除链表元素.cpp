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
    
    ListNode* removeElements(ListNode* head, int val) 
    {
        if(!head)
            return head;
        struct ListNode* dummyHead = new ListNode(0, head);
        struct ListNode* temp = dummyHead;
        while (temp->next != NULL)
        {
            if(temp->next->val==val)
            {
                if(temp->next->next)
                    temp->next=temp->next->next;
                else
                    temp->next=NULL;
            }
            temp=temp->next;
        }
        return  head;
    }
};
