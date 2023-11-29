class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) 
	{
		vector<int>row(matrix.size());//存储要清除的行号 
		vector<int>cal(matrix[0].size());//存储要清楚的列号
		for(int	i=0;i<matrix.size();i++)
		{
			for(int	j=0;j<matrix[i].size();j++)
			{
				if(matrix[i][j]==0)
				{
					row[i]=cal[j]=1;	
				}	
			}	
		}//扫描数组，记录元素是0位置的行和列
		for(int	i=0;i<matrix.size();i++)
		{
			
			for(int	j=0;j<matrix[i].size();j++)
			{
				if(row[i]||cal[j])
				{
					matrix[i][j]=0;	
				}	
			}	
		}
		return	matrix;
		 
    }
};
