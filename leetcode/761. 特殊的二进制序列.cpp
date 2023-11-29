class Solution {
public:
    string makeLargestSpecial(string s)
    {
        if (s.size() <= 2)
            return  s;
        int cnt = 0;    //判断一个特殊子串的出现，当为0时说明出现了
        int left = 0;   //递归位置标记
        vector<string>subs;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
                cnt++;
            else
            {
                cnt--;
                if (cnt == 0)  //找到一个特殊子串
                {
                    subs.push_back("1" + makeLargestSpecial(s.substr(left + 1, i - left - 1)) + "0");
                    left = i + 1;   //重新标记递归起点  
                }
            }
        }
        sort(subs.begin(), subs.end(), greater<string>{});
        string ans = accumulate(subs.begin(), subs.end(), ""s);//特殊写法
        return  ans;
    }
};