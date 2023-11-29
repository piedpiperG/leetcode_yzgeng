class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target)
    {
        int row = matrix[0].size();
        int cal = matrix.size();
        int x = 0;
        int y = row-1;
        while (x < cal && y >= 0)
        {
            if (matrix[x][y] == target)
                return  true;
            else if(matrix[x][y]<target)
            {
                x++;
            }
            else
            {
                y--;
            }
        }
        return false;
    }
};