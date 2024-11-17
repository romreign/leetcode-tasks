class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int left = 0;
        for (auto right = 0; right < nums.size(); right++) {
            if (nums[right] != val) {
                swap(nums[left], nums[right]);
                left++;
            }
        }
        return left;
    }
};