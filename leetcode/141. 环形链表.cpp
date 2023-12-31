/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) 
	{
    	unordered_set<ListNode	*head>set;
		while(head)
		{
			if(set.count(head))
				return	true;
			set.insert(head);
			head=head->next;	
		}    
    }
};
