class Solution {
public:
    vector<int> getRow(int numRows)
    {
        numRows++;
        vector<vector<int>> ret(numRows);
        for (int i = 0; i < numRows; i++)
        {
            ret[i].resize(i+1);
            ret[i][0] = ret[i][i] = 1;
            for (int j = 1; j < i; ++j)
            {
                ret[i][j] = ret[i - 1][j] + ret[i - 1][j - 1];
            }
        }
        return ret[numRows-1];
    }
};