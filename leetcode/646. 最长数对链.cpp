bool cmp(vector<int>a, vector<int>b)
{
    if (a[1] == b[1])
        return  a[0] < b[0];
    else
        return  a[1] < b[1];
}
class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) 
    {
        sort(pairs.begin(), pairs.end(), cmp);
        int loc = 0;
        int ans = 1;
        for (int i = 1; i < pairs.size(); i++)
        {
            if (pairs[i][0] > pairs[loc][1])
            {
                ans++;
                loc = i;
            }
        }
        return  ans;
    }
};