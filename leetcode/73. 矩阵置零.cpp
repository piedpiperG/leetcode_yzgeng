class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) 
	{
		vector<int>row(matrix.size());//�洢Ҫ������к� 
		vector<int>cal(matrix[0].size());//�洢Ҫ������к�
		for(int	i=0;i<matrix.size();i++)
		{
			for(int	j=0;j<matrix[i].size();j++)
			{
				if(matrix[i][j]==0)
				{
					row[i]=cal[j]=1;	
				}	
			}	
		}//ɨ�����飬��¼Ԫ����0λ�õ��к���
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
