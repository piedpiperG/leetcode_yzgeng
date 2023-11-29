class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped)
    {
        int n = pushed.size();
        stack<int>sta;
        int cnt1 = 0;
        int cnt2 = 0;
        sta.push(pushed[cnt1++]);
        while (!sta.empty())
        {
            if (sta.top() != popped[cnt2] && (cnt2 == n || cnt1 == n))
                return  false;
            else if (sta.top() != popped[cnt2])
            {
                sta.push(pushed[cnt1++]);
            }
            else if (sta.top() == popped[cnt2])
            {
                sta.pop();
                if (cnt1 < n - 1)
                {
                    sta.push(pushed[cnt1++]);
                }
                cnt2++;
            }
        }
        return  true;
    }
};