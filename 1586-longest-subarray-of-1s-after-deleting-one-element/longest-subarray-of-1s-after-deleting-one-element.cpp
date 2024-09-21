class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int sum = 0, left = 0, zeroes = 0;
        for (auto right = 0; right < nums.size(); right++)
        {
            if (nums[right] == 0)
                zeroes++;
            while (zeroes > 1)
            {
                if (nums[left] == 0)
                    zeroes--;
                left++;
            }
            sum = max(sum, right - left);
        }
        return sum;
    }
};
