class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) 
    {
        int currColor = image[sr][sc];
        if (currColor == color) 
            return image;
        int mx[] = { 0, 1, 0, -1 };
        int my[] = { 1, 0, -1, 0 };
        queue<vector<int>>que;
        vector<int>start(2);
        start[0] = sr;
        start[1] = sc;
        image[start[0]][start[1]] = color;
        que.push(start);
        while (!que.empty())
        {
            vector<int>cur(2);
            cur = que.front();
            que.pop();
            for (int i = 0; i < 4; i++)
            {
                vector<int>nex(2);
                nex[0] = cur[0] + mx[i];
                nex[1] = cur[1] + my[i];
                if (nex[0] >= 0 && nex[0] < image.size() && nex[1] >= 0 && nex[1] < image[0].size()
                    && image[nex[0]][nex[1]]==currColor)//判断是否在界中
                {
                    image[nex[0]][nex[1]] = color;
                    que.push(nex);
                }
            }
        }
        return image;
    }
};

//不经过初始化就访问的数据结构，就是耍流氓
