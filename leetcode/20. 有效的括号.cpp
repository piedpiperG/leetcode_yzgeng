class Solution {
public:
    bool isValid(string s) 
	{
		int	n=s.size();
		if(n%2==1)
			return	false;
		stack<char>stk;
		//char	firch=s.at(0);
		/*if(firch=='('||firch=='['||firch=='{')
        {
            
        }
		else
			return	false;*/
		stk.push('c');
		for(char	ch:s)
		{
			if(ch=='('||ch=='['||ch=='{')
			{
				stk.push(ch);
			}
			else
			{
				char	c=stk.top();
				if(c=='c')
					return	false;
				else	if((ch==')'&&c=='(')
					||(ch==']'&&c=='[')
						||(ch=='}'&&c=='{'))
                {
                    //cout<<"!"<<endl;
                }
				else	
					return	false;
				stk.pop();
			}
		}
		stk.pop();
		return	stk.empty();
    }
};
