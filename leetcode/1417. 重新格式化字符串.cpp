class Solution {
public:
    string reformat(string s)
    {
        unordered_map<int, int>digihash;
        unordered_map<int, int>alphhash;
        int digi = 0;
        int alph = 0;
        int size = s.size();
        for (char c : s)
        {
            if (c >= '0' && c <= '9')
                digihash[digi++] = c;
            else
                alphhash[alph++] = c;
        }
        if (abs(digi - alph) > 1)
            return  "";
        else if (digi > alph)
        {
            int cnt = 0;
            int cnt1 = 0;
            int cnt2 = 0;
            while (cnt < size)
            {
                s[cnt++] = digihash[cnt1++];
                s[cnt++] = alphhash[cnt2++];
            }
        }
        else
        {
            int cnt = 0;
            int cnt1 = 0;
            int cnt2 = 0;
            while (cnt < size)
            {
                s[cnt++] = alphhash[cnt1++];
                s[cnt++] = digihash[cnt2++];
            }
        }
        return  s;
    }
};