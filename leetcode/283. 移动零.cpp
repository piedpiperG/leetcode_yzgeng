class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
		int left=0,right=0;
		while(right<nums.size())
		{
			if(nums[right])
			{
				int temp=nums[left];
				nums[left]=nums[right];
				nums[right]=temp;
				left++;
			}
			right++;
		}
    }
};
