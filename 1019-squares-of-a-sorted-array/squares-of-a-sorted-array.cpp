class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> result(nums.size());
        int l = 0, r = nums.size() - 1, i = nums.size() - 1;
        while (l <= r) {
            if (abs(nums[l]) < abs(nums[r]))
                result[i--] = nums[r] * nums[r--]; 
            else
                result[i--] = nums[l] * nums[l++]; 
        }
        return result;
    }
};