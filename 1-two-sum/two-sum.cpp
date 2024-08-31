class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        std::unordered_map<int, int> unums;
        for (int i = 0; i < nums.size(); ++i) {
            int num1 = nums[i], num2 = target - num1;
            if (unums.find(num2) != unums.end()) return {unums[num2], i};
            unums[nums[i]] = i;
        }
        return {};
    }
};