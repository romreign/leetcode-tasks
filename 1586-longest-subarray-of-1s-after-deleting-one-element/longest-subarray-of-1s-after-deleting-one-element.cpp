class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int left = 0, countZeros = 0, maxD = 0;
        for (auto right = 0; right < nums.size(); right++) {
            if (nums[right] == 0)
                countZeros++;

            while (countZeros > 1) {
                if (nums[left] == 0)
                    countZeros--;
                left++;
            }
            maxD = max(maxD, right - left);
        }
        return maxD;
    }
};