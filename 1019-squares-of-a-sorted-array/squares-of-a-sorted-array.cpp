class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> result(nums.size());
        int left = 0, right = nums.size() - 1;
        for (auto i = 0; i < nums.size(); i++)
            nums[i] = nums[i] * nums[i];
        for (auto i = right; i >= 0; i--)
        {
            if (nums[left] > nums[right])
                result[i] = nums[left++];
            else
                result[i] = nums[right--];
        }
        return result;
    }
};