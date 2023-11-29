class Solution {
public:
	int longestConsecutive(vector<int>& nums)
	{
		unordered_set<int>num_set;
		int curnum = 0;
		int curlen = 0;
		int maxlen = 0;
		for (auto num : nums)
		{
			num_set.insert(num);
		}
		for (auto num : num_set)
		{
			if (num_set.count(num - 1) == 0) //向下没有找到
			{
				curnum = num;
				curlen = 1;
				while (num_set.count(curnum + 1) == 1) //向上寻找合适的点
				{
					curlen++;
					curnum++;
				}
			}
			maxlen = max(curlen, maxlen);
		}
		return maxlen;
	}
};