class Solution {
public:
    int maxSubArray(vector<int>& nums) 
	{
    	int	pre=nums[0];
		int	maxans=nums[0];
		for(int	i=0;i<nums.size();i++)
		{
			pre=max(nums[i],pre+nums[i]);	
			maxans=max(maxans,pre);
		}	
		return	maxans;
    }
};

/*
int pre = 0, maxAns = nums[0];								
        for (const auto &x: nums) {							
            pre = max(pre + x, x);							
            maxAns = max(maxAns, pre);						
        }													
        return maxAns;
*/
