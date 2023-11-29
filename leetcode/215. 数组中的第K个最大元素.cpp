#include<iostream>
class Solution {
public:
	int findKthLargest(vector<int>& nums, int k)
	{
		int ans;
		priority_queue<int>que;
		for (int i = 0; i < nums.size(); i++)
			que.push(nums[i]);
		for (int i = 0; i < k; i++)
		{
			ans = que.top();
			que.pop();
		}
		return ans;
	}
};