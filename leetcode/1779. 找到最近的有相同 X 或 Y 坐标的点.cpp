class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) 
    {
        int ans = -1;
        int temp = INT_MAX;
        int count = -1;
        for (auto i : points)
        {
            count++;
            if (i[0] != x && i[1] != y)
                continue;
            if (abs(i[0] - x) + abs(i[1] - y) < temp)
            {
                ans = count;
                temp = abs(i[0] - x) + abs(i[1] - y);
            }
        }
        return  ans;
    }
};
//太慢了，看来是能整点活