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
    ListNode* removeNthFromEnd(ListNode* head, int n) 
	{
		ListNode*	p=head;
		ListNode*	q=new	ListNode;
		stack<ListNode*>stk;
		while(p)
		{
			stk.push(p);
			p=p->next;
		}
		for(int	i=0;i<n;i++)
		{
			q=stk.top();
			stk.pop();
		}
        if(stk.empty()!=1)
        {
		    p=stk.top();
		    p->next=q->next;
        }
        else
        {
            head=head->next;
        }
		return	head;
    }
};
