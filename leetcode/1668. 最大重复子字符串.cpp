class Solution {
public:
    int maxRepeating(string sequence, string word) 
    {
        int ans = 0;
        int len = word.size();
        bool con = false;
        for (int i = 0; i < sequence.size(); i++)
        {
            if (sequence[i] == word[0]&&con==false) //�����ж�ѭ��
            {
                con = true;
            }
            else if (con == true)   //��ѭ���е����
            {
                
            }
        }
    }
};