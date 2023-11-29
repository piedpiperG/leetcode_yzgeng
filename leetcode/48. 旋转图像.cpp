class Solution {
public:
    void rotate(vector<vector<int>>& matrix) 
    {
        int n = matrix.size();
        for (int i = 0; i < n / 2; i++)     //水平翻转
        {
            for (int j = 0; j < n; j++)
            {
                swap(matrix[i][j], matrix[n - 1 - i][j]);
            }
        }

        for (int i = 0; i < n ; i++)     //主对角线翻转
        {
            for (int j = i + 1; j < n; j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }
};
//使用先水平翻转，再主对角线翻转的方式