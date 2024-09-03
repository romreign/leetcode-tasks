class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        if (nums.size() == 1) return nums;
        int first = 0, second = 0;
        while (second != nums.size())
        {
            if (nums[first] % 2 != 0 && nums[second] % 2 == 0)
                swap(nums[first++], nums[second]);
            if (first == second || nums[second] % 2 != 0)
                second++;
            if (second != nums.size() && nums[first] % 2 == 0 && nums[second] % 2 == 0)
                first++;
        }
        return nums;
    }
};