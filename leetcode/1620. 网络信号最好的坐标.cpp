class Solution {
public:
    vector<int> bestCoordinate(vector<vector<int>>& towers, int radius)
    {
        if (towers.size() == 1)
            return  towers[0];
        vector<int>ans;
        //找出区域边界
        int m = -1, n = -1;
        for (int i = 0; i < towers.size(); i++)
        {
            m = max(towers[i][0], m);
            n = max(towers[i][1], n);
        }
        //逐个搜索各个点的信号强度
        for (int i = 0; i <= m; i++)
        {
            for (int j = 0; j <= n; j++)
            {

            }
        }
    }
};