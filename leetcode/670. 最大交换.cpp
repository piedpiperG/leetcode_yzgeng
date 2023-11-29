class Solution {
public:
    int maximumSwap(int num)
    {
        int m, n = num;
        int lat = -1;
        int templat = -1;
        int ear = -1;
        int maxnnum = -1;
        int cnt = 0;
        vector<int>vec;
        while (n > 0)
        {
            m = n % 10;
            n = n / 10;
            if (m > maxnnum)
            {
                if (cnt > ear && cnt != 0)
                    templat = cnt;
                else
                {
                    lat = cnt;
                    templat = lat;
                }
                maxnnum = m;
            }
            else if (m < maxnnum)
            {
                ear = cnt;
                lat = templat;
            }
            vec.push_back(m);
            cnt++;
        }
        if (ear == -1)
            return  num;
        int temp = vec[lat];
        vec[lat] = vec[ear];
        vec[ear] = temp;
        int ans = 0;
        for (int i = 0; i < vec.size(); i++)
        {
            ans += pow(10, i) * vec[i];
        }
        return  ans;
    }
};