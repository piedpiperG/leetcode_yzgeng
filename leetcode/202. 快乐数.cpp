class Solution {
public:
    int math(int n)
    {
        int ans = 0;
        while (n)
        {
            ans += pow(n % 10, 2);
            n /= 10;
        }
        return  ans;
    }
    bool isHappy(int n) 
    {
        int slow = math(n);
        int fast = math(math(math(n)));
        while (slow != 1 && fast != 1)
        {
            if (fast == slow)
                return  false;
            slow = math(slow);
            fast = math(math(math(fast)));
        }
        return  true;
    }
};  //快慢指针，比哈希表节省了点空间复杂度