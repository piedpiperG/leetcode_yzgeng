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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
	{
		ListNode*	p=l1;
		ListNode*	q=l2;
		ListNode*	ans=new	ListNode;
		ListNode*	r=ans;
		while(p!=NULL||q!=NULL)
		{
			int	x1=0,x2=0;//当前的两个数字 
			if(p!=NULL)
			{
				x1=p->val;
				p=p->next;
			}
			if(q!=NULL)
			{
				x2=q->val;
				q=q->next;
			}
            if(p==NULL&&q==NULL)
            {
                int cur=r->val+x1+x2;
                if(cur>=10)
                {
                    r->val=cur%10;
    			    r->next=new	ListNode;
	    		    r->next->val+=(cur)/10;
		    	    r=r->next;
                }//进位
                else
                    r->val=cur%10;
            }
            else
			{
                int cur=r->val+x1+x2;
                r->val=cur%10;
			    r->next=new	ListNode;
			    r->next->val+=(cur)/10;
			    r=r->next;
            }
            //cout<<ans->val<<endl;
		}//大的循环判断计算是否停止
        return  ans;
    }
};
