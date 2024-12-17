class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int cursum = accumulate(nums.begin(), nums.end(), 0);
        int sum = n + (n - 1) * n / 2;
        return sum - cursum;
    }
};