class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        for (auto i = 1; i < nums.size(); i++)
        {
            if (nums[i] == nums[i - 1])
            {
                nums.erase(nums.begin() + i);
                i--;
            }
        }
        return nums.size();
    }
};