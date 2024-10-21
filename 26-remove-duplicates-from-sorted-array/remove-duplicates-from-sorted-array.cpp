class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        auto k = 0;
        for (auto i = 0; i < nums.size(); i++) {
            if (nums[k] != nums[i]) {
                k++;
                swap(nums[k], nums[i]);
            }
        }
        return k + 1;
    }
};
