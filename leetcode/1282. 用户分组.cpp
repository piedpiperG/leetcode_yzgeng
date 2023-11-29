class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes)
    {
        unordered_map<int, int>hash;    //定位到答案数组中的位置
        vector<vector<int>>ans;
        int cnt = 0;    //答案数组中不同组别的编号，从1开始
        for (int i = 0; i < groupSizes.size(); i++)
        {
            if (hash.find(groupSizes[i]) == hash.end() || ans[hash[groupSizes[i]]].size() == groupSizes[i])   //没有列入此元素大小的数组
            {
                vector<int>temp;
                ans.push_back(temp);    //插入一个类别数组
                ans[cnt].push_back(i);
                hash[groupSizes[i]] = cnt;
                cnt++;  //进行编号
            }
            else
            {
                ans[hash[groupSizes[i]]].push_back(i);
            }
        }
        return  ans;
    }
};