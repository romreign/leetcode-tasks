class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int marr = -1, zero = 0, l = 0;
        for (auto r = 0; r < nums.size(); r++) {
            if (!nums[r])
                zero++;
            while (zero > 1) {
                if (!nums[l])
                    zero--;
                l++;
            }
            marr = max(marr, r - l);
        }
        return marr;
    }
};
