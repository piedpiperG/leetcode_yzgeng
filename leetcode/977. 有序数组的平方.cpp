class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) 
	{
		vector<int>ans(nums.size());
		int p1=0,p2=nums.size()-1;
        int count=p2;
		while(p1<=p2)
		{
			if(nums[p1]>=0)
				ans[count--]=pow(nums[p2--],2);
			else	if(nums[p2]<0)
				ans[count--]=pow(nums[p1++],2);
			else	if(-nums[p1]>=nums[p2])
				ans[count--]=pow(nums[p1++],2);
			else	if(-nums[p1]<nums[p2])
				ans[count--]=pow(nums[p2--],2);
		}
		return	ans;
    }
};
