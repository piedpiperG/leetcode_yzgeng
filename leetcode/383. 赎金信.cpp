class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) 
    {
  		if(randsomNote.size()>magazine.size())
			return	false;
		vector<int>cnt(26);
		for(char	c:magazine)
		{
			cnt[c-'a']++;	
		}	      
		for(char	c:magazine)
		{
			cnt[c-'a']--;
			if(cnt[c-'a']<0)
			{
				return	false;
			}
		}
		return	true;
    }
};
