bool    cmp(int x, int y)
{
    return  x > y;
}
class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) 
    {
        vector<int>ans;
        int size = nums.size();
        if (size == 1)
            return  nums;
        int left = 0;
        int right = size - 1;
        sort(nums.begin(), nums.end(), cmp);
        int sum1 = nums[left], sum2 = nums[right];
        ans.push_back(nums[left]);
        while (left < right)
        {
            if (sum1 > sum2)
            {
                sum2 += nums[--right];
            }
            else
            {
                sum1 += nums[++left];
                ans.push_back(nums[left]);
            }
        }
        return  ans;
    }
};