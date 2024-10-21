class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int md = nums[0], d = 0;
        for (auto num : nums) {
            d += num;
            md = max (md, d);
            if (d < 0)
                d = 0;
        }
        return md;
    }
};