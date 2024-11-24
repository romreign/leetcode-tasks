class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxcount = 0, count = 0;
        for (auto i = 0; i < nums.size(); i++) {
            if (nums[i] == 0)
                count = 0;
            else {
                count++;
                maxcount = max(maxcount, count);
            }
        }
        return maxcount;
    }
};