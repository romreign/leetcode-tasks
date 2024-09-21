class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> result(nums.size());
        int left = 0, right = nums.size() - 1, index = nums.size() - 1;
        while (left <= right)
        {
            if (abs(nums[left]) > abs(nums[right]))
                result[index--] = nums[left] * nums[left++];
            else
                result[index--] = nums[right] * nums[right--];
        }
        return result;
    }
};