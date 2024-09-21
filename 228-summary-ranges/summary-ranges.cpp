class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        if (nums.size() == 0)
            return {};
        auto first = 0;
        vector<string> result;
        for (auto second = 0; second < nums.size(); second++)
        {
            if (first == second)
                continue;
            if ((first == second - 1) && (nums[second] != nums[first] + 1))
            {
                result.push_back(to_string(nums[first]));
                first = second;
            }
            else if (nums[second] != nums[second - 1] + 1)
            {
                result.push_back(to_string(nums[first]) + "->" + to_string(nums[second-1]));
                first = second;
            }
        }
        if (first == nums.size() - 1)
            result.push_back(to_string(nums[first]));
        else
            result.push_back(to_string(nums[first]) + "->" + to_string(nums[nums.size()-1]));
        return result;
    }
};

