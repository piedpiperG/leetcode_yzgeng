class Solution {
public:
    int subarraySum(vector<int>& nums, int k)
    {
        int size = nums.size();
        vector<int>dp(size);
        int ans = 0;
        for (int i = 0; i < size; i++)
        {
            int temp = nums[i];
            for (int j = 0; j <= i; j++)
            {
                dp[j] += temp;
                if (dp[j] == k)
                    ans++;
            }
        }
        return  ans;
    }
};