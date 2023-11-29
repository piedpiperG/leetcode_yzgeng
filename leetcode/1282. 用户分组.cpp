class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes)
    {
        unordered_map<int, int>hash;    //��λ���������е�λ��
        vector<vector<int>>ans;
        int cnt = 0;    //�������в�ͬ���ı�ţ���1��ʼ
        for (int i = 0; i < groupSizes.size(); i++)
        {
            if (hash.find(groupSizes[i]) == hash.end() || ans[hash[groupSizes[i]]].size() == groupSizes[i])   //û�������Ԫ�ش�С������
            {
                vector<int>temp;
                ans.push_back(temp);    //����һ���������
                ans[cnt].push_back(i);
                hash[groupSizes[i]] = cnt;
                cnt++;  //���б��
            }
            else
            {
                ans[hash[groupSizes[i]]].push_back(i);
            }
        }
        return  ans;
    }
};