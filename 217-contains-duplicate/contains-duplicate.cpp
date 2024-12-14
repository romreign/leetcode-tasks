class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        for (auto n : nums)
            mp[n]++;
        for (auto p : mp)
            if (p.second >= 2)
                return true;
        return false;
    }
};