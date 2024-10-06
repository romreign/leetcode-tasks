class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0, curSum = 0;
        unordered_map<int, int> um;
        um[0] = 1;
        for (auto i = 0; i < nums.size(); i++)
        {
            curSum += nums[i];
            if (um.find(curSum - k) != um.end())
                count += um[curSum - k];
            um[curSum]++;
        }
        return count;
    }
};
