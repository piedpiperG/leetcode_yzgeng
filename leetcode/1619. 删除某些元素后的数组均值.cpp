class Solution {
public:
    double trimMean(vector<int>& arr) 
    {
        double  ans = 0;
        int n = arr.size();
        sort(arr.begin(), arr.end());
        int cnt = 0;
        for (int i = n / 20; i < n * 19 / 20; i++)
        {
            ans += arr[i];
            cnt++;
        }
        return  ans / cnt;
    }
};