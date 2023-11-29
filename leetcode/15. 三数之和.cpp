class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums)
    {
        int size = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>>ans;
        for (int i = 0; i < size; i++)
        {
            if (i>0 && nums[i] == nums[i - 1])  //为避免重复，不重复枚举第一个数字
                continue;
            int target = -nums[i];
            unordered_map<int, int>hash;
            int lastnotice = -1;    //用于标记上一个数字是插入还是返回，插入为0，返回为1
            for (int j = i+1; j < nums.size(); j++)
            {
                auto it = hash.find(target - nums[j]);   
                if (it != hash.end())              // 做返回
                {
                    if (lastnotice == 1 && j > i + 1 && nums[j] == nums[j - 1]) //如果两数相同且上一个数同样做的是返回
                        continue;
                    vector<int>branch;
                    branch.push_back(nums[i]);
                    branch.push_back(it->first);
                    branch.push_back(nums[j]);
                    ans.push_back(branch);
                    lastnotice = 1;
                }
                else
                {
                    if (lastnotice == 0 && j > i + 1 && nums[j] == nums[j - 1]) //如果两数相同且上一个数同样做的是插入
                        continue;
                    hash[nums[j]] = j;
                    lastnotice = 0;
                }
            }
        }
        return ans;
    }
};

//关键在于防止出现重复解
//所以先选择了排序
//而后三次选择中不断剪枝防止使用同样的数字进行枚举