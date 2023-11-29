class Solution {
public:
    string freqAlphabets(string s)
    {
        int size = s.size();
        string ans;
        for (int i = size - 1; i >= 0; i--)
        {
            if (s[i] == '#')
            {
                int tempnum = s[--i] - '0' + (s[--i] - '0') * 10;
                ans += 'a' + tempnum - 1;
            }
            else
            {
                int tempnum = s[i] - '0';
                ans += 'a' + tempnum - 1;
            }
        }
        reverse(ans.begin(), ans.end());
        return  ans;
    }
};