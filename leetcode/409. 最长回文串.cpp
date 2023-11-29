class Solution {
public:
    int longestPalindrome(string s)
    {
        int size = s.length();
        int ans = 0;
        unordered_map<int, int>hash;
        for (char c : s)
        {
            hash[c]++;
            if (hash[c] % 2 == 0)
                ans += 2;
        }
        if (size > ans)
            return  ans + 1;
        return  ans;
    }
};