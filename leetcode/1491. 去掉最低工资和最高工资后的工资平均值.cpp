class Solution {
public:
    double average(vector<int>& salary) 
    {
        double  ans = 0;
        int size = salary.size() - 2;
        int maxi = INT_MIN;
        int mini = INT_MAX;
        for (int i : salary)
        {
            if (i > maxi)
                maxi = i;
            if (i < mini)
                mini = i;
            ans += i;
        }
        return  (ans - mini - maxi) / size;
    }
};