class Solution {
public:
    vector<string> summaryRanges(const vector<int>& nums) {
        if (!nums.size())
            return {};

        int l = 0;
        vector<string> result;
        for (auto r = 1; r < nums.size(); r++) {
            if (nums[r] != nums[l] + 1 && l + 1 == r) {
                result.push_back(to_string(nums[l]));
                l = r;
            }
            else if (nums[r] != nums[r-1] + 1) {
                result.push_back(to_string(nums[l]) + "->" + to_string(nums[r - 1]));
                l = r;
            }
        }
        if (l != nums.size() - 1)
            result.push_back(to_string(nums[l]) + "->" + to_string(nums[nums.size() - 1]));
        else
            result.push_back(to_string(nums[l]));

        return result;
    }
};

