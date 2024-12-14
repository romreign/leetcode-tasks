class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxD = 0, count = 0;
        for (auto i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                count++;
                maxD = max(maxD, count);
            }
            else
                count = 0;
        }
        return maxD;
    }
};