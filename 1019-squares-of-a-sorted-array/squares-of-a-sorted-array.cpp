class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int l = 0, r = nums.size() - 1, n = r;
        vector<int> result(r + 1);
        while (l <= r) {
            if (abs(nums[l]) > abs(nums[r])) 
                result[n--] = nums[l] * nums[l++];
            else
                result[n--] = nums[r] * nums[r--];
        }
        return result;
    }
};