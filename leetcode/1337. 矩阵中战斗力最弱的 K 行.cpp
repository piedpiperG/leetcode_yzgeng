class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) 
    {
        vector<int>ans(k);
        int count = 0;
        unordered_map<int, int>hash;
        while (count < k)
        {
            for (int i = 0; i < mat[0].size(); i++)
            {
                for (int j = 0; j < mat.size(); j++)
                {
                    if (mat[j][i] == 0 && hash.find(j) == hash.end())
                    {
                        ans[count++] = j;
                        if (count == k)
                            return  ans;
                        hash[j]++;
                    }
                }
            }
            for (int i = 0; i < mat.size(); i++)
            {
                if (hash.find(i) != hash.end())
                    ans[count++] = i;
                if (count == k)
                    return  ans;
            }
        }
        return  ans;
    }
};
//cout << count << "," << i << "," << j << endl;
//int temp = count - 1;
//cout << ans[temp] << endl;