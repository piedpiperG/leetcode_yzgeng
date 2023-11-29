class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        unordered_map<int,int>hash;
        int n=s.size();
        int ans=0;
        for(int i=0;i<n;i++)	//从第一个字母开始向后遍历 
        {
        	int temp=0;
        	for(int j=i;j<n;j++)	//每一个字母的情况 
        	{
        		if(hash[s[j]].count)
        		{
        			ans=max(ans,temp);
        			break;
				}
				hash[s[j]]++;
				temp++; 
			}
		}
		return ans;
    }
};
