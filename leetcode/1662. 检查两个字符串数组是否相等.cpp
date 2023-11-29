class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2)
    {
        int n = word1.size();
        int j = 0;
        int jj = 0;
        for (int i = 0; i < n; i++)
        {
            for (int ii = 0; ii < word1[i].size(); ii++)
            {
                if (word1[i][ii] != word2[j][jj])
                    return  false;
                jj++;
                if (jj > word2[j].size() - 1)
                {
                    j++;
                    jj = 0;
                }
                if (j > word2.size() - 1 && ii != word1[i].size() - 1)
                    return  false;
            }
        }
        if (j != word2.size() || jj != 0)
            return  false;
        return  true;
    }
};