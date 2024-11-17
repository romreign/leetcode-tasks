class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> result(nums.size(), 0);
        int left = 0, right = nums.size() - 1, index = right;

        while (left <= right) {
            if (abs(nums[left]) <= abs(nums[right]))
                result[index--] = nums[right] * nums[right--];
            else
                result[index--] = nums[left] * nums[left++];
        }
        return result;
    }
};