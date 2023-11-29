class Solution {
public:
    int rob(vector<int>& nums)
    {
        int cnt1 = 0, cnt2 = 0, cnt3 = 0;
        for (int i = 0; i < nums.size(); i += 2)
        {
            cnt1 += nums[i];
        }
        if (nums.size() == 0)
            return cnt1;
        for (int i = 1; i < nums.size(); i += 2)
        {
            cnt2 += nums[i];
        }
        if (!(nums.size() % 2))
        {
            int l1 = 0, l2 = nums.size() - 1;
            while (l1 + 1 <= l2)
            {
                cnt3 += (nums[l1] + nums[l2]);
                l1 += 2;
                l2 -= 2;
            }
        }
        return cnt1 > cnt2 ? (cnt1 > cnt3 ? cnt1 : cnt3) : (cnt2 > cnt3 ? cnt2 : cnt3);

    }
};