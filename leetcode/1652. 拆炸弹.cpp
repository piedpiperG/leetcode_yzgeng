class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) 
    {
        int size = code.size();
        vector<int>ans(size);
        if (k == 0)
            return  ans;
        bool    judge = k > 0 ? true : false;
        for (int i = 0; i < size; i++)
            for (int j = 1; j <= abs(k); j++)
            {
                if (judge)
                    ans[i] += code[(i + j) % size];
                else
                    ans[i] += code[(i - j + size) % size];
            }
        return  ans;
    }
};