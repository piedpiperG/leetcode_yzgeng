class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
    	int n=nums.size();
		vector<int>ans(n);
		for(int i=k-1;i<n;i++)
		{
			ans[i]=nums[i-(k-1)];
		}
		for(int i=0;i<k-1;i++)
		{
			ans[i]=nums[i+(k+1)];
		}
		temp=ans;
    }
};
