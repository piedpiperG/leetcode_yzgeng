class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) 
    {
        int n = mat.size();
        int m = mat[0].size();
        unordered_map<int,int>hash;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            bool    temp = false;
            for (int j = 0; j < m; j++)
            {
                if (mat[i][j] == 1 && !temp && hash[j] == 0)
                {
                    ans++;
                    hash[j]++;
                    temp = true;
                }
                else if (hash[i][j] == 1 && tmep)
                {
                    ans--;
                    break;
                }
            }
        }
        return  ans;
    }
};