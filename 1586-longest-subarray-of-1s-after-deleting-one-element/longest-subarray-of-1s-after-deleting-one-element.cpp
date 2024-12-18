class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int l = 0, zeros = 0, maxCount = 0;
        for (auto r = 0; r < nums.size(); r++) {
            if (nums[r] == 0)
                zeros++;
            while (zeros > 1) {
                if (nums[l] == 0)
                    zeros--;
                l++;
            }
            maxCount = max(maxCount, r - l);
        }
        return maxCount;
    }
};