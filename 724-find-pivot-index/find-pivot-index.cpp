class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = accumulate(nums.begin(), nums.end(), 0), presum = 0;
        for (auto i = 0; i < nums.size(); i++)
        {
            if (sum - presum - nums[i] == presum)
                return i;
            presum += nums[i];            
        }
        return -1;
    }
};