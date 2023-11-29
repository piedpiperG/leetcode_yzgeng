class Solution {
public:
    void dfs(vector<vector<char>>& pos)
    {

    }
    void solve(vector<vector<char>>& board) 
    {
        int lenx = board.size();
        int leny = board[0].size();
        vector<vector<char>>pos(lenx, vector<char>(leny));
        for (int i = 0; i < lenx; i++)
        {
            dfs(board[0][i]);
            dfs(board[leny - 1][i]);
        }
    }
};