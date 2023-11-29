class Solution {
public:
    int partitionDisjoint(vector<int>& nums)
    {
        int maxnum = nums[0];
        int tempmax = maxnum;
        int ans = 0;
        for (int i = 1; i < nums.size(); i++)
        {
            tempmax = max(nums[i], tempmax);
            if (nums[i] < maxnum)
            {
                ans = i;
                maxnum = tempmax;
            }
        }
        return  ans + 1;
    }
};


