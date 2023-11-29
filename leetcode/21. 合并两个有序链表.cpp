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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
	{
    	ListNode*	curlist=list1;
    	ListNode*	nexlist=list2;
    	if(nexlist==NULL)
		{
			return	list1;
		}
    	while(curlist&&nexlist)
    	{
    		if(curlist==NULL)
    		{
    			break;
			}
			if(nexlist->next==NULL)
			{
				nextlist->nex=curlist;
				break;
			}
    		if(curlist->val>=nexlist->val&&curlist->val<nexlist->next->val)
    		{
                if(curlist->val<nexlist->next->val)
                {
    			    ListNode*	templist=curlist->next;
    			    insert(curlist,nexlist);
        			nexlist=nexlist->next;
        			curlist=templist;
                }
			}
		}
		return	list2;		    
    }
    void	insert(ListNode* list1, ListNode* list2) 
    {
    	if(list2->next==NULL)
    	{
    		list2->next=list1;
    		list1->next=NULL;
		}
		else
		{
			list1->next=list2->next;
			list2->next=list1;
		}
	}//插入函数，功能是将list1插入在list2后面 
};
