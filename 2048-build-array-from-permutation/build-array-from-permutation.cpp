class Solution {
public:
    std::vector<int> buildArray(vector<int>& nums) {
        std::vector<int> ans;
        for (auto i = 0; i < nums.size(); i++)
            ans.push_back(nums[nums[i]]);
        return ans;
    }
};