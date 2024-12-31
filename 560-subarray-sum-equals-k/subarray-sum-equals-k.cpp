class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int curSum = 0, count = 0;
        unordered_map<int, int> mp;
        mp[0] = 1;

        for (auto n : nums) {
            curSum += n;
            if (mp.contains(curSum - k))
                count += mp[curSum - k];
            mp[curSum]++;
        }
        return count;
    }
};