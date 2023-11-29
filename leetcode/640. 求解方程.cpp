class Solution {
public:
    string solveEquation(string equation)
    {
        int factor = 0;//未知数个数
        int val = 0;//数值大小
        int cnt = 0;//判断遍历个数
        int size = equation.length();
        int sign1 = 1;//等式左侧正负号，1为正-1为负
        while (cnt < size)
        {
            if (equation[cnt] == '=')
            {
                cnt++;
                sign1 = -1;
                continue;
            }
            int num = 0;  //存储这一位数字的值
            int sign2 = sign1;  //保证sign1不被修改
            bool    valid = false;//记录x前是否有系数
            if (equation[cnt] == '-')
            {
                sign2 = -sign1;
                cnt++;
            }
            else if (equation[cnt] == '+')
            {
                cnt++;
            }
            while (cnt < size && isdigit(equation[cnt]))
            {
                num = num * 10 + (equation[cnt] - '0');
                cnt++;
                valid = true;
            }
            if (cnt < size && equation[cnt] == 'x')
            {
                cnt++;
                if (valid)
                    factor += sign2 * num;
                else
                    factor += sign2;
            }
            else
                val += sign2 * num;

        }
        if (factor == 0)
            return val == 0 ? "Infinite solutions" : "No solution";
        return  string("x=") + to_string(-val / factor);
    }
};