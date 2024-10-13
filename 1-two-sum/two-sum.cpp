class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;

        for (auto i = 0; i < nums.size(); i++) {
            auto find_num = target - nums[i];
            if (mp.find(find_num) != mp.end()) {
                return {mp[find_num], i};
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};