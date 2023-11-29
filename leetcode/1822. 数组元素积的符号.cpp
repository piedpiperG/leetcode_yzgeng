class Solution {
public:
    int arraySign(vector<int>& nums) 
    {
        int nega = 0;
        for (int i : nums)
        {
            if (i == 0)
                return  0;
            if (i < 0)
                nega++;
        }
        if (nega % 2)
            return  -1;
        return  1;
    }
};