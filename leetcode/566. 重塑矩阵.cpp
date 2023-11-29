class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) 
	{
		if(mat.size()*mat[0].size()!=r*c)
			return	mat;
		vector<vector<int>>remat(r,vector<int>(c));
		for(int	i=0;i<r*c;i++)
		{
			remat[i/c][i%c]=mat[i/mat[0].size()][i%mat[0].size()];	
		}
		return	remat;
    }
};
