class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates)
    {
        double  a = (coordinates[1][1] - coordinates[0][1]) * (coordinates[1][0] - coordinates[0][0]);
        double  b = coordinates[1][1] - a * coordinates[0][1];
        if (!(coordinates[1][0] - coordinates[0][0]))
        {
            for (auto i : coordinates)
                if (i[0] != coordinates[0][0])
                    return  false;
            return  true;
        }
        for (auto i : coordinates)
        {
            if (i[1] != a * i[0] + b)
                return false;
        }
        return  true;
    }
};
//先求出直线方程y=ax+b;然后遍历验证