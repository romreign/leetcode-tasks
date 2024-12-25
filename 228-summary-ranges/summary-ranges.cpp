class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> result;
        int left = 0;
        if (nums.size() == 0)
            return {};
            
        for (auto right = 1; right <= nums.size(); right++) {
            if (right == nums.size() || nums[right] != nums[right - 1] + 1) {
                if (left == right - 1) 
                    result.push_back(to_string(nums[left]));
                else 
                    result.push_back(to_string(nums[left]) + "->" + to_string(nums[right - 1]));
                left = right;
            }
        }
        return result;
    }
};

