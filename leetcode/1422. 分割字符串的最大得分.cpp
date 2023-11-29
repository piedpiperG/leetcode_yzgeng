class Solution {
public:
    int maxScore(string s)
    {
        if (s == "00")
            return  1;
        if (s == "01")
            return  2;
        vector<int>cnt1(s.size());
        vector<int>cnt2(s.size());
        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s[i] == '0')
                cnt1[i] = i == 0 ? 1 : cnt1[i - 1] + 1;
            else
                cnt1[i] = i == 0 ? 0 : cnt1[i - 1];
            //cout<<cnt1[i]<<endl;
        }
        //cout<<endl;
        for (int i = s.size() - 1; i > 0; i--)
        {
            if (s[i] == '1')
                cnt2[i] = i == s.size() - 1 ? 1 : cnt2[i + 1] + 1;
            else
                cnt2[i] = i == s.size() - 1 ? 0 : cnt2[i + 1];
            //cout<<cnt2[i]<<endl;
        }
        //cout<<endl;
        int maxi = 0;
        for (int i = 1; i < s.size(); i++)
        {
            int temp = cnt2[i];
            cnt1[i] += temp;
            //cout<<cnt1[i]<<endl;
            maxi = max(maxi, cnt1[i]);
        }
        return  maxi;
    }
};