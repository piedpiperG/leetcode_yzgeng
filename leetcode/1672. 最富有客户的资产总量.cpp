class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts)
    {
        int ans = 0;
        for (auto i : accounts)
        {
            int temp = 0;
            for (int j : i)
            {
                temp +=j;
            }
            ans = max(temp, ans);
        }
        return  ans;
    }
};