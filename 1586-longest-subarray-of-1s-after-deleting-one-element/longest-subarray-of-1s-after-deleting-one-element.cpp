class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int sum = 0, left = 0, zeroes = 0;
        for (auto i = 0; i < n; i++)
        {
            if (nums[i] == 0)
                zeroes++;
            while (zeroes > 1)
            {
                if (nums[left] == 0)
                    zeroes--;
                left++;
            }
            sum = max(sum, i - left);
        }
        return sum;
    }
};
