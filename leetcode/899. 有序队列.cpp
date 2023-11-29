class Solution {
public:
    string orderlyQueue(string s, int k) 
    {
        int size = s.length();
        string ans;
        if (k == 1)
        {
            ans = s;
            for (int i = 1; i < size; i++)
            {
                char    c = s[0];
                s = s.substr(1);
                s.push_back(c);
                if (s < ans)
                    ans = s;
            }
            return  ans;
        }
        else
        {
            sort(s.begin(), s.end());
            return  s;
        }
    }
};