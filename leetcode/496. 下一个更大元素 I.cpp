class Solution {
public:
    int find(int x, vector<int>nums)
    {
        for (int i = 0; i < nums.size(); i++)
            if (x == nums[i])
                return  i;
        return -1;
    }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2)
    {
        int size1 = nums1.size();
        int size2 = nums2.size();
        stack<int>sta;
        vector<int>help(size2);
        unordered_map<int, int>hash;
        for (int i = 0; i < size2; i++)
            help[i] = -1;
        for (int i = 0; i < size2; i++)
            hash[nums2[i]] = i;
        int q = 1;  //标记nums2数组移动
        sta.push(nums2[0]);
        while (q < size2)
        {
            while (!sta.empty() && nums2[q] > sta.top())
            {
                help[hash[sta.top()]] = nums2[q];
                sta.pop();
            }
            sta.push(nums2[q++]);
        }
        for (int i = 0; i < nums1.size(); i++)
        {
            nums1[i] = help[find(nums1[i], nums2)];
        }
        return  nums1;
    }
};
//可以维护一个栈，然后写一个nus2的对应数组试试
//有bug，吃饭回来再修