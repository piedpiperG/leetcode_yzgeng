class Solution {
public:
    vector<vector<int>> generateMatrix(int n)
    {
        vector<vector<int>>ans(n, vector<int>(n));
        int row = 0;    //������
        int cal = -1;    //������
        int con = 1;    //���߷���1�ң�2�£�3��4��
        for (int i = 1; i <= n * n; i++)
        {
            if (con == 1)       //�����ұ߽�
            {
                if (++cal == n|| ans[row][cal])
                {
                    cal--;
                    row++;
                    con = 2;
                }
            }       
            else if (con == 2)      //�����±߽�
            {
                if (++row == n || ans[row][cal])
                {
                    row--;
                    cal--;
                    con = 3;
                }
            }
            else if (con == 3)      //������߽�
            {
                if (--cal == -1 || ans[row][cal])
                {
                    cal++;
                    row--;
                    con = 4;
                }
            }
            else if (con == 4)      //�����ϱ߽�
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