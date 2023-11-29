class Solution {
public:
    int rob(vector<int>& nums) 
    {
        int size = nusm.size();
        vector<int>dp(size);
        vector<bool>st(size);
        dp[0] = nusm[0];
        st[0] = true;
        if (size == 0)
            return dp[0];
        dp[1] = max(nums[0], nums[1]);
        st[0] = false;
        for (int i = 2; i < size; i++)
        {
            if (st[i - 2] == false)
            {
                dp[i] = max(dp[i - 2] + nums[i], dp[i - 1]);
            }
            else
            {
                temp = max(dp[i - 2] - nums[0] + nums[i], dp[i - 2]);
                dp[i] = max(temp, dp[i - 1]);
            }
        }
        return dp[size - 1];
    }
};