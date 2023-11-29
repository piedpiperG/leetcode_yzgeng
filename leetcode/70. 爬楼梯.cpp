class Solution {
public:
    int climbStairs(int n) 
    {
        if (n == 1)
            return  1;
        else if (n == 2)
            return  2;
        else
        {
            int cur = 1, nex = 2, ans;
            int cnt = 2;
            while (cnt != n)
            {
                ans = cur + nex;
                cur = nex;
                nex = ans;
                cnt++;
            }
            return ans;
        }

    }
};