class Solution {
public:
    bool possibleBipartition(int n, vector<vector<int>>& dislikes)
    {
        unordered_map<int, int>set1;
        unordered_map<int, int>set2;
        for (int i = 0; i < dislikes.size(); i++)
        {
            if (set1.find(dislikes[i][0]) != set1.end())
            {
                if (set1.find(dislikes[i][1]) != set1.end())
                    return  false;
                else
                    set2[dislikes[i][1]] = 1;
            }
            else if (set2.find(dislikes[i][0]) != set2.end())
            {
                if (set2.find(dislikes[i][1]) != set2.end())
                    return  false;
                else
                    set1[dislikes[i][1]] = 1;
            }
            else
            {
                set1[dislikes[i][0]] = 1;
                set2[dislikes[i][1]] = 1;
            }
        }
        return  true;
    }
};