class Solution {
public:
	int numIslands(vector<vector<char>>& grid)
	{
		int nx = grid.size(), ny = grid[0].size();
		int ans = 0;
		for (int i = 0; i < nx; i++)
			for (int j = 0; j < ny; j++)
			{
				if (grid[i][j] == '1')
				{
					dfs(i, j, grid);
					ans++;
				}
			}
		return ans;
	}

	void dfs(int x, int y, vector<vector<char>>& grid)
	{
		int nx = grid.size(), ny = grid[0].size();
		vector<int>movx;
		vector<int>movy;
		movx = { -1, 0, 0, 1 };
		movy = { 0, 1, -1, 0 };
		grid[x][y] = '0';
		for (int i = 0; i < 4; i++)
		{
			int nexx = x + movx[i];
			int nexy = y + movy[i];
			if (0 <= nexx && nexx < nx && 0 <= nexy && nexy < ny
				&& grid[nexx][nexy] == '1')
			{
				grid[nexx][nexy] = '0';
				dfs(nexx, nexy, grid);
			}
		}
	}
};