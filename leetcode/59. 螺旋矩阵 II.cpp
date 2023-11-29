class Solution {
public:
    vector<vector<int>> generateMatrix(int n)
    {
        vector<vector<int>>ans(n, vector<int>(n));
        int row = 0;    //行坐标
        int cal = -1;    //列坐标
        int con = 1;    //行走方向，1右，2下，3左，4上
        for (int i = 1; i <= n * n; i++)
        {
            if (con == 1)       //到达右边界
            {
                if (++cal == n|| ans[row][cal])
                {
                    cal--;
                    row++;
                    con = 2;
                }
            }       
            else if (con == 2)      //到达下边界
            {
                if (++row == n || ans[row][cal])
                {
                    row--;
                    cal--;
                    con = 3;
                }
            }
            else if (con == 3)      //到达左边界
            {
                if (--cal == -1 || ans[row][cal])
                {
                    cal++;
                    row--;
                    con = 4;
                }
            }
            else if (con == 4)      //到达上边界
            {
                if (--row == -1 || ans[row][cal])
                {
                    row++;
                    cal++;
                    con = 1;
                }
            }
            ans[row][cal] = i;
        }
        return ans;
    }
};