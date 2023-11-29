class Solution {
public:
    string interpret(string command) 
    {
        int size = command.length();
        string  ans;
        for (int i = 0; i < size; i++)
        {
            if (command[i] == 'G')
                ans += 'G';
            else if (command[i] == '(')
            {
                if (command[i + 1] == ')')
                {
                    i++;
                    ans += 'o';
                }
                else
                {
                    i = i + 3;
                    ans += "al";
                }
            }
        }
        return  ans;
    }
};