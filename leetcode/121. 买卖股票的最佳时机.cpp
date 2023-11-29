class Solution {
public:
    int maxProfit(vector<int>& prices) 
	{
		int	ans=0;
		int	mintemp=vector[0];
		for(int	i:prices)
		{
			if(i<mintemp)
				mintemp=i;
			else	if(i-mintemp>ans)	
				ans=i-mintemp;
		}		
		return	ans;
    }
};
