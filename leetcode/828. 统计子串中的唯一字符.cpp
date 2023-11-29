class Solution {
public:
    int countUniqueChars(string s)
    {
        int ans = 0;
        unordered_map<int, int>hash;
        for (int i = 0; i < s.size(); i++)
        {
            if (hash.find(s[i]) == hash.end())  //Ã»ÕÒµ½
            {
                hash[s[i]]++;
                ans++;
            }
            else if (hash[s[i]] == 1)
            {
                ans--;
                hash[s[i]]++;
            }
        }
        return  ans;
    }
    int uniqueLetterString(string s)
    {
        int ans = 0;
        unordered_map<string, int>hash;
        for (int i = 1; i <= s.size(); i++)
        {
            for (int j = 0; j < s.size(); j++)
            {
                string temp = s.substr(j, i);
                if (hash.find(temp) != hash.end())
                    ans += hash[temp];
                else
                {
                    int n = countUniqueChars(temp);
                    ans += n;
                    hash[temp] = n;
                }
                if (j + i == s.size())
                    break;
            }
        }
        return  ans;
    }
};