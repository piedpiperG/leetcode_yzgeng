class Solution {
public:
    int math(int n)
    {
        int ans = 0;
        while (n)
        {
            n &= (n - 1);
            ans++;
        }
        return ans;
    }
    static  bool    cmp(int x, int y)
    {
        if (math(x) == math(y))
            return  x < y;
        else
            return  math(x) < math(y);
    }
    vector<int> sortByBits(vector<int>& arr)
    {
        sort(arr.begin(), arr.end(), cmp);
        return  arr;
    }
};