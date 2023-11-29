struct pos
{
    int a;
    int b;
    int steps;
};
class Solution {
public:
    int dir[4][2] = { {0,1},{0,-1},{1,0},{-1,0} };  //移动数组
    vector<vector<int>>vis = vector<vector<int>>(101, vector<int>(101));   //痕迹数组
    bool    judge(int x, int y, int sx, int sy)
    {
        if (x < 0 || x >= sx || y < 0 || y >= sy)
            return  false;
        return  true;
    }
    int bfs(int x, int y, vector<vector<int>>& mat)
    {
        pos cur, nex;
        queue<pos>que;
        cur.a = x;
        cur.b = y;
        cur.steps = 0;
        que.push(cur);
        vis[cur.a][cur.b] = 1;
        while (!que.empty())
        {
            cur = que.front();
            que.pop();
            if (mat[cur.a][cur.b] == 0)
                return  cur.steps;
            for (int i = 0; i < 4; i++)
            {
                nex.a = cur.a + dir[i][0];
                nex.b = cur.b + dir[i][1];
                if (judge(nex.a, nex.b, mat.size(), mat[0].size()) && vis[nex.a][nex.b] == 0)
                {
                    vis[nex.a][nex.b] = 1;
                    nex.steps = cur.steps + 1;
                    que.push(nex);
                }
            }
        }
        return  -1;
    }
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat)
    {
        vector<vector<int>>ans;
        ans = mat;
        int sx = mat.size();
        int sy = mat[0].size();
        for (int i = 0; i < sx; i++)
        {
            for (int j = 0; j < sy; j++)
            {
                if (mat[i][j] == 0)
                    ans[i][j] = 0;
                else
                {
                    vis.clear();
                    ans[i][j] = bfs(i, j, mat);
                }
            }
        }
        return  ans;
    }
};