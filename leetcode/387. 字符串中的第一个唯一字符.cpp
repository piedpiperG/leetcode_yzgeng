class Solution {
public:
    int firstUniqChar(string s) 
	{
		unordered_map<int,int>frequen;
		for(char	ch:s)
		{
			++frequen[ch];
		}
		for(int	i=0;i<s.size();i++)
		{
			if(frequen[s[i]]==1)
				return	i;
		}
		return	-1;
    }
};
