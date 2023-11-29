class Solution {
public:
    int dir[4][2] = { {0,1},{0,-1},{1,0},{-1,0} };  //移动数组
    vector<vector<int>>vis= vector<vector<int>>(50, vector<int>(50));   //痕迹数组

    int bfs(int x, int y, vector<vector<int>>& grid)
    {
        int m = grid.size();
        int n = grid[0].size(); //标记长宽
        queue<pair<int, int>>que;   //bfs队列
        int ans = 1;
        que.emplace(x, y);
        vis[x][y] = 1;
        while (!que.empty())
        {
            int curx = que.front().first;
            int cury = que.front().second;
            que.pop();
            for (int i = 0; i < 4; i++)
            {
                int nexx = curx + dir[i][0];
                int nexy = cury + dir[i][1];
                if (nexx >= 0 && nexx < m && nexy >= 0 && nexy < n && vis[nexx][nexy] == 0&&grid[nexx][nexy]==1)
                {
                    que.emplace(nexx, nexy);
                    vis[nexx][nexy] = 1;
                    ans++;
                }
            }
        }
        return ans;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) 
    {
        int m = grid.size();
        int n = grid[0].size(); //标记长宽
        int ans = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (vis[i][j] == 0 && grid[i][j] == 1)
                {
                    ans = max(ans, bfs(i, j, grid));
                }
            }
        }
        return ans;
    }
};