class Solution {
public:
    string makeLargestSpecial(string s)
    {
        if (s.size() <= 2)
            return  s;
        int cnt = 0;    //�ж�һ�������Ӵ��ĳ��֣���Ϊ0ʱ˵��������
        int left = 0;   //�ݹ�λ�ñ��
        vector<string>subs;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
                cnt++;
            else
            {
                cnt--;
                if (cnt == 0)  //�ҵ�һ�������Ӵ�
                {
                    subs.push_back("1" + makeLargestSpecial(s.substr(left + 1, i - left - 1)) + "0");
                    left = i + 1;   //���±�ǵݹ����  
                }
            }
        }
        sort(subs.begin(), subs.end(), greater<string>{});
        string ans = accumulate(subs.begin(), subs.end(), ""s);//����д��
        return  ans;
    }
};