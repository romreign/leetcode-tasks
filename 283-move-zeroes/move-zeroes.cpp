class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        auto slow = 0;
        for (auto fast = 0; fast < nums.size(); fast++)
            if (nums[fast]) {
                swap(nums[slow], nums[fast]);
                slow++;
            }
    }
};