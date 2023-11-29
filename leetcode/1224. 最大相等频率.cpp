class Solution {
public:
    int maxEqualFreq(vector<int>& nums)
    {
        unordered_map<int, int>fre;
        unordered_map<int, int>cnt;
        int ans = 0;
        int maxfre = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            int n = nums[i];
            if (cnt[n])
                fre[cnt[n]]--;  //更新频率，将已有的频率消去
            cnt[n]++;
            maxfre = max(maxfre, cnt[n]);
            fre[cnt[n]]++;
            bool    judge = false;
            if (maxfre == 1)
                judge = true;
            else if (fre[maxfre] * maxfre + fre[maxfre - 1] * (maxfre - 1) == i + 1 && fre[maxfre] == 1)
                judge = true;
            else if (fre[maxfre] * maxfre + 1 = i + 1 && fre[1] == 1)
                judge = true;
            if (judge)
                ans = max(ans, i + 1);
        }
        return  ans;
    }
};