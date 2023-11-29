class Solution {
public:
    int subtractProductAndSum(int n) 
    {
        int mult = 1;
        int plus = 0;
        while (n)
        {
            mult *= n % 10;
            plus += n % 10;
            n /= 10;
        }
        return  mult - plus;
    }
};