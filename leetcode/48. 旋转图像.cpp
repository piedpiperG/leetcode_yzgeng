class Solution {
public:
    void rotate(vector<vector<int>>& matrix) 
    {
        int n = matrix.size();
        for (int i = 0; i < n / 2; i++)     //ˮƽ��ת
        {
            for (int j = 0; j < n; j++)
            {
                swap(matrix[i][j], matrix[n - 1 - i][j]);
            }
        }

        for (int i = 0; i < n ; i++)     //���Խ��߷�ת
        {
            for (int j = i + 1; j < n; j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }
};
//ʹ����ˮƽ��ת�������Խ��߷�ת�ķ�ʽ