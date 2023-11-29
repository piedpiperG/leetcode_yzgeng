class Solution {
public:
    string solveEquation(string equation)
    {
        int factor = 0;//δ֪������
        int val = 0;//��ֵ��С
        int cnt = 0;//�жϱ�������
        int size = equation.length();
        int sign1 = 1;//��ʽ��������ţ�1Ϊ��-1Ϊ��
        while (cnt < size)
        {
            if (equation[cnt] == '=')
            {
                cnt++;
                sign1 = -1;
                continue;
            }
            int num = 0;  //�洢��һλ���ֵ�ֵ
            int sign2 = sign1;  //��֤sign1�����޸�
            bool    valid = false;//��¼xǰ�Ƿ���ϵ��
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