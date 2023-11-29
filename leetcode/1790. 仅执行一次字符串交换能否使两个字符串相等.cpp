class Solution {
public:
    bool areAlmostEqual(string s1, string s2) 
    {
        int len1 = s1.length();
        int len2 = s2.length();
        if (len1 != len2)
            return  false;
        int diff = 0;
        char    c1, c2;
        for (int i = 0; i < len1; i++)
        {
            if (diff > 2)
                return  false;
            if (s1[i] != s2[i] && diff == 0)
            {
                diff++;
                c1 = s1[i];
                c2 = s2[i];
            }
            else if (s1[i] != s2[i] && diff == 1)
            {
                if (c1 != s2[i] || c2 != s1[i])
                    return  false;
                diff++;
            }
            else if (s1[i] != s2[i])
                diff++;
        }
        if (diff == 1 || diff > 2)
            return  false;
        return  true;
    }
};

//又陷入了剪枝困境，一累就各种考虑不全然后剪枝。。。