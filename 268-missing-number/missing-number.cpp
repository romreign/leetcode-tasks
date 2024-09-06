class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int gaus_sum = nums.size() * (nums.size() + 1) / 2;
        for (auto num : nums)
            gaus_sum -= num;
        return gaus_sum;
    }
};
