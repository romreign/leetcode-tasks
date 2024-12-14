class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        if (!nums.size())
            return {};
        int l = 0;
        vector<string> result;

        for (auto r = 0; r < nums.size(); r++) {
            if (l == r)
                continue;
            if (l == r - 1 && nums[l] != nums[r] - 1) {
                result.push_back(to_string(nums[l]));
                l = r;
            }
            else if (nums[r] != nums[r - 1] + 1) {
                result.push_back(to_string(nums[l]) + "->" + to_string(nums[r - 1]));
                l = r;
            }
        }
        if (l == nums.size() - 1)
            result.push_back(to_string(nums[l]));
        else
            result.push_back(to_string(nums[l]) + "->" + to_string(nums[nums.size() - 1]));

        return result;
    }
};