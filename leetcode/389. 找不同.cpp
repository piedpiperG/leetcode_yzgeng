class Solution {
public:
    char findTheDifference(string s, string t) 
    {
        unordered_map<char, int>hash;
        for (char i : s)
            hash[i]++;
        for (char i : t)
        {
            hash[i]--;
            if (hash[i] < 0)
                return  i;
        }
        return  '0';
    }
};