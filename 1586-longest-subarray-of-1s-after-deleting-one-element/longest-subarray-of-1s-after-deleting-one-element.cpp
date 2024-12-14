class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxD = 0, zeros = 0, left = 0;
        for (auto i = 0; i < nums.size(); i++) {
            if (nums[i] == 0)
                zeros++;
            while (zeros > 1) {
                if (nums[left] == 0)
                    zeros--;
                left++;
            }
            maxD = max(maxD, i - left);
        }
        return maxD;
    }
};