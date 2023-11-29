class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        unordered_map<int,int>hash;
        int n=s.size();
        int ans=0;
        for(int i=0;i<n;i++)	//�ӵ�һ����ĸ��ʼ������ 
        {
        	int temp=0;
        	for(int j=i;j<n;j++)	//ÿһ����ĸ����� 
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
