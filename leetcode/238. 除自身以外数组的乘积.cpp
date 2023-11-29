class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums)
    {
        int size = nums.size();
        vector<int>ans(size);
        //从左侧开始遍历
        ans[0] = 1;
        for (int i = 1; i < size; i++)
        {
            ans[i] = ans[i - 1] * nums[i - 1];
        }
        //从右侧开始遍历
        int R = 1;
        for (int i = size - 1; i >= 0; i--)
        {
            ans[i] = ans[i] * R;
            R *= nums[i];
        }
        return ans;
    }
};
//采用左右互乘两次遍历的方法