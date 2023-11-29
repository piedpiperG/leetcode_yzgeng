class Solution {
public:
    bool increasingTriplet(vector<int>& nums)
    {
        vector<int>help(3);
        help[0] = INT_MAX;
        help[1] = INT_MAX;
        help[2] = INT_MIN;
        for (int i : nums)
        {
            if (i <= help[0])
                help[0] = i;
            else if (i <= help[1])
                help[1] = i;
            else
                help[2] = max(i, help[2]);
        }
        if (help[0] != INT_MAX && help[1] != INT_MAX && help[2] != INT_MIN)
            return  true;
        else
            return false;
    }
};