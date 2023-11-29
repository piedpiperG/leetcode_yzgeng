class Solution 
{
public:
    int maxChunksToSorted(vector<int>& arr)
    {
        vector<int>temp = arr;
        sort(temp.begin(), temp.end());
        int ans = 0;
        long sum1 = 0;
        long sum2 = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            sum1 += temp[i];
            sum2 += arr[i];
            if (sum1 == sum2)
                ans++;
        }
        return  ans;
    }
};