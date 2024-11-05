class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> result;
        int left = 0;
        if (nums.size() == 0)
            return {};
            
        for (auto right = 1; right < nums.size(); right++) {
            if (left == right - 1 && nums[right] != nums[left] + 1) {
                result.push_back(to_string(nums[left]));
                left = right;
            }
            else if (nums[right] != nums[right - 1] + 1) {
                result.push_back(to_string(nums[left]) + "->" + to_string(nums[right - 1]));
                left = right;
            }
        }
        if (left == nums.size() - 1)
            result.push_back(to_string(nums[left]));
        else
            result.push_back(to_string(nums[left]) + "->" + to_string(nums[nums.size() - 1]));
        return result;
    }
};

