class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0, max_ = nums[0];
        for (auto i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            if (sum > max_)
                max_ = sum;
            if (sum < 0)
                sum = 0;
        }
        return max_;
    }
};