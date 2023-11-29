class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord)
    {
        int size1 = sentence.size();
        int size2 = searchWord.size();
        int ans = 1;
        int cnt2 = 0;
        bool    ok = true; //判断是否进入比对模式
        for (int cnt1 = 0; cnt1 < size1; cnt1++)
        {
            if (sentence[cnt1] == ' ')
            {
                ans++;
                ok = true;
                cnt2 = 0;
                continue;
            }
            if (ok)
            {
                if (sentence[cnt1] == searchWord[cnt2])
                {
                    if (cnt2 == size2 - 1)
                        return  ans;
                    cnt2++;
                }
                else
                {
                    ok = false;
                    cnt2 = 0;
                }
            }
        }
        return  -1;
    }
};