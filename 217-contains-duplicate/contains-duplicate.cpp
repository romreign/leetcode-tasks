class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (auto n : nums)
            mp[n]++;
        for (auto n : mp)
            if (n.second > 1)
                return true;
        return false;
    }
};