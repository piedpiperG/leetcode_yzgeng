struct tasks
{
    int kind;
    int time;
};
class Solution {
public:
    vector<int> exclusiveTime(int n, vector<string>& logs)
    {
        stack<tasks>sta;
        vector<int>ans(n, 0);
        for (int i = 0; i < logs.size(); i++)
        {
            char    type[10];
            tasks   task;
            sscanf(logs[i].c_str(), "%d:%[^:]:%d", &task.kind, type, &task.time);
            if (type[0] == 's')
            {
                if (!sta.empty())
                {
                    tasks    it = sta.top();
                    ans[it.kind] += task.time - it.time;
                }
                sta.push(task);
            }
            else
            {
                tasks    it = sta.top();
                sta.pop();
                ans[it.kind] += task.time - it.time + 1;
                if (!sta.empty())
                {
                    sta.top().time = task.time + 1;
                }
            }
        }
        return  ans;
    }
};