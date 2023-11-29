class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums)
    {
        int size = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>>ans;
        for (int i = 0; i < size; i++)
        {
            if (i>0 && nums[i] == nums[i - 1])  //Ϊ�����ظ������ظ�ö�ٵ�һ������
                continue;
            int target = -nums[i];
            unordered_map<int, int>hash;
            int lastnotice = -1;    //���ڱ����һ�������ǲ��뻹�Ƿ��أ�����Ϊ0������Ϊ1
            for (int j = i+1; j < nums.size(); j++)
            {
                auto it = hash.find(target - nums[j]);   
                if (it != hash.end())              // ������
                {
                    if (lastnotice == 1 && j > i + 1 && nums[j] == nums[j - 1]) //���������ͬ����һ����ͬ�������Ƿ���
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
                    if (lastnotice == 0 && j > i + 1 && nums[j] == nums[j - 1]) //���������ͬ����һ����ͬ�������ǲ���
                        continue;
                    hash[nums[j]] = j;
                    lastnotice = 0;
                }
            }
        }
        return ans;
    }
};

//�ؼ����ڷ�ֹ�����ظ���
//������ѡ��������
//��������ѡ���в��ϼ�֦��ֹʹ��ͬ�������ֽ���ö��