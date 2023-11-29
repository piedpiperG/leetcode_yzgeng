class Solution {
public:
    bool IsTrian(int x, int y, int z)
    {
        if (x + y > z)
            return  true;
        return  false;
    }
    int largestPerimeter(vector<int>& nums) 
    {
        int size = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = size - 3; i >= 0; i--)
        {
            if (IsTrian(nums[i],nums[i+1],nums[i+2]))
                return nums[i] + nums[i + 1] + nums[i + 2];
        }
        return  0;
    }
};
//相对于三次循环查找，排序已经是不错的选择了