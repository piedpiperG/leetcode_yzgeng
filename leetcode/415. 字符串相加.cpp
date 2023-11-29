class Solution {
public:
    string addStrings(string num1, string num2)
    {
        int l1 = num1.length() - 1;
        int l2 = num2.length() - 1;
        int jiw = 0;
        string ans;
        while (l1 >= 0 || l2 >= 0 || jiw != 0)
        {
            int plu;
            if (l1 < 0 && l2 >= 0)
                plu = num2[l2] - '0' + jiw;
            else if (l2 < 0 && l1 >= 0)
                plu = num1[l1] - '0' + jiw;
            else if (l1 < 0 && l2 < 0)
                plu = jiw;
            else
                plu = num1[l1] - '0' + num2[l2] - '0' + jiw;
            int yus = plu % 10;
            jiw = plu / 10;
            ans.push_back(yus + '0');
            l1--;
            l2--;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};