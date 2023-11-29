class Solution {
public:
    int minStartValue(vector<int>& nums) 
    {
        int mini = INT_MAX;
        int temp = 0;
        for (int i : nums)
        {
            temp += i;
            mini = min(mini, temp);
        }
        if (mini >= 0)
            return  1;
        else
            return  -mini + 1;
    }
};