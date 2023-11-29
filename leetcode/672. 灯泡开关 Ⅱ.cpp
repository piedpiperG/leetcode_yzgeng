class Solution {
public:
    int flipLights(int n, int presses) 
    {
        queue<vector<int>>que;
        vector<int>init(n);
        for (int i = 0; i < n; i++)
            init[i] = 1;
        que.push(init);
        for (int i = 0; i < presses; i++)
        {
            for (int j = 0; j < que.size(); j++)
            {
                vector<int>cur = que.front();
                //情况一
                vector<int>nex = cur;
                for (int k = 0; k < n; k++)
                    if (nex[k] == 0)
                        nex[k] = 1;
                    else
                        nex[k] = 0;
                que.push(nex);
                //情况二
                vector<int>nex1 = cur;
                for (int k = 1; k * 2 < n; k++)
                    if (nex1[k * 2] == 0)
                        nex1[k * 2] = 1;
                    else
                        nex1[k * 2] = 0;
                que.push(nex1);
                //情况三
                vector<int>nex2 = cur;
                for (int k = 1; k * 2 - 1 < n; k++)
                    if (nex2[k * 2 - 1] == 0)
                        nex2[k * 2 - 1] = 1;
                    else
                        nex2[k * 2 - 1] = 0;
                que.push(nex2);
                //情况四
                vector<int>nex3 = cur;
                for (int k = 0; k * 3 + 1 < n; k++)
                    if (nex3[k * 3 + 1] == 0)
                        nex3[k * 3 + 1] = 1;
                    else
                        nex3[k * 3 + 1] = 0;
                que.push(nex3);
            }
            
        }
        int ans = 0;
        unordered_map<vector, int>hash;
        for (int i = 0; i < que.size(); i++)
        {
            vector<int>cur = que.front();
            que.pop();
            if (hash[cur] == 0)
            {
                ans++;
                hash[cur]++;
            }
        }
        return  ans;
    }
};