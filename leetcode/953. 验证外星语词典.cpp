class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order)
    {
        unordered_map<int, int>hash;
        int count = 1;
        for (char c : order)
            hash[c] = count++;
        for (int i = 0; i < words.size() - 1; i++)
        {
            for (int j = 0; j < words[i].size(); j++)
            {
                if (j > words[i + 1].size() - 1)
                    return  false;
                if (hash[words[i][j]] == hash[words[i + 1][j]])
                    continue;
                else if (hash[words[i][j]] > hash[words[i + 1][j]])
                    return  false;
                else if (hash[words[i][j]] < hash[words[i + 1][j]])
                    break;
            }
        }
        return  true;
    }
};