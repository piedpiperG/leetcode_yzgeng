class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) 
    {
        int size = intervals.size();
        if (size == 0)
            return  0;
        sort(intervals.begin(), intervals.end(), [](const auto& u, const auto& v) 
        {
            return u[1] < v[1];
        });
        int right = intervals[0][1];
        int ans = 1;
        for (int i = 1; i < size; i++)                  
        {
            if (intervals[i][0] >= right)
            {
                ans++;
                right = intervals[i][1];
            }
        }
        return  size - ans;
    }
};