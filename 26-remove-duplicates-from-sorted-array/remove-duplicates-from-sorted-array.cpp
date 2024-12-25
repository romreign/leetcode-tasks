class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l = 0;

        for (auto r = 0; r < nums.size(); r++) {
            if (nums[l] != nums[r]) {
                l++;
                swap(nums[l], nums[r]);
            }
        }
        return l + 1;
    }
};