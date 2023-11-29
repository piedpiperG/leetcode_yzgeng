class Solution {
public:
    string mergeAlternately(string word1, string word2) 
    {
        int l1 = word1.length();
        int l2 = word2.length();
        int p1 = 0;
        int p2 = 0;
        string ans;
        int notice = 1;
        while (p1 < l1 || p2 < l2)
        {
            if (p1 == l1)
                ans += word2[p2++];
            else if (p2 == l2)
                ans += word1[p1++];
            else if (notice)
            {
                ans += word1[p1++];
                notice = 0;
            }
            else
            {
                ans += word2[p2++];
                notice = 1;
            }
        }
        return ans;
    }
};
//Ê¹ÓÃ+=Ìí¼Ó×Ö·û´®