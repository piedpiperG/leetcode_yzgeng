class Solution {
public:
    int countPairs(vector<int> &nums, int target) {
        int cnt = 0;
        int size = nums.size();
        for (int i = 0; i < size; i++) {
            for (int j = i + 1; j < size; j++) {
                if (nums[i] + nums[j] < target)
                    cnt++;
            }
        }
        return cnt;

    }
};