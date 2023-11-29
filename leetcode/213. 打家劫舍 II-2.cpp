class Solution {
public:
    int solve(vector<int>& nums, int start, int end)
    {
        vector<int>dp(end + 1);
        dp[start] = nums[start];
        dp[start + 1] = max(nums[start], nums[start + 1]);
        for (int i = start + 2; i <= end; i++)
        {
            dp[i] = max(dp[i - 2] + nums[i], dp[i - 1]);
        }
        return dp[end];
    }
    int rob(vector<int>& nums) 
    {
        int size = nums.size();
        if (size == 1)
            return nums[0];
        else if (size == 2)
            return max(nums[0], nums[1]);
        return max(solve(nums, 0, size - 2), solve(nums, 1, size - 1));
    }
};