class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int l = 0;
        for (auto r = 0; r < nums.size(); r++) {
            if (nums[r] != val) {
                swap(nums[l], nums[r]);
                l++;
            }
        }
        return l;
    }
};