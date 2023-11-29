class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) 
    {
        unordered_map<int, int>hash;
        int ans = 0;
        for (char c : allowed)
        {
            hash[c]++;
        }
        for (int i = 0; i < words.size(); i++)
        {
            bool    ok = true;
            for (int j = 0; j < words[i].size(); j++)
            {
                if (hash.find(words[i][j]) == hash.end())//Ã»ÕÒµ½
                    ok = false;
            }
            if (ok)
                ans++;
        }
        return  ans;
    }
};